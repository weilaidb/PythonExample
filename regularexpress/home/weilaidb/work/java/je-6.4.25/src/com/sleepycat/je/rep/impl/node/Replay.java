package com.sleepycat.je.rep.impl.node;
import static com.sleepycat.je.log.LogEntryType.LOG_NAMELN_TRANSACTIONAL;
import static com.sleepycat.je.log.LogEntryType.LOG_TXN_ABORT;
import static com.sleepycat.je.log.LogEntryType.LOG_TXN_COMMIT;
import static com.sleepycat.je.rep.impl.node.ReplayStatDefinition.LATEST_COMMIT_LAG_MS;
import static com.sleepycat.je.rep.impl.node.ReplayStatDefinition.MAX_COMMIT_PROCESSING_NANOS;
import static com.sleepycat.je.rep.impl.node.ReplayStatDefinition.MIN_COMMIT_PROCESSING_NANOS;
import static com.sleepycat.je.rep.impl.node.ReplayStatDefinition.N_ABORTS;
import static com.sleepycat.je.rep.impl.node.ReplayStatDefinition.N_COMMITS;
import static com.sleepycat.je.rep.impl.node.ReplayStatDefinition.N_COMMIT_ACKS;
import static com.sleepycat.je.rep.impl.node.ReplayStatDefinition.N_COMMIT_NO_SYNCS;
import static com.sleepycat.je.rep.impl.node.ReplayStatDefinition.N_COMMIT_SYNCS;
import static com.sleepycat.je.rep.impl.node.ReplayStatDefinition.N_COMMIT_WRITE_NO_SYNCS;
import static com.sleepycat.je.rep.impl.node.ReplayStatDefinition.N_ELAPSED_TXN_TIME;
import static com.sleepycat.je.rep.impl.node.ReplayStatDefinition.N_GROUP_COMMITS;
import static com.sleepycat.je.rep.impl.node.ReplayStatDefinition.N_GROUP_COMMIT_MAX_EXCEEDED;
import static com.sleepycat.je.rep.impl.node.ReplayStatDefinition.N_GROUP_COMMIT_TIMEOUTS;
import static com.sleepycat.je.rep.impl.node.ReplayStatDefinition.N_GROUP_COMMIT_TXNS;
import static com.sleepycat.je.rep.impl.node.ReplayStatDefinition.N_LNS;
import static com.sleepycat.je.rep.impl.node.ReplayStatDefinition.N_MESSAGE_QUEUE_OVERFLOWS;
import static com.sleepycat.je.rep.impl.node.ReplayStatDefinition.N_NAME_LNS;
import static com.sleepycat.je.rep.impl.node.ReplayStatDefinition.TOTAL_COMMIT_LAG_MS;
import static com.sleepycat.je.rep.impl.node.ReplayStatDefinition.TOTAL_COMMIT_PROCESSING_NANOS;
import static java.util.concurrent.TimeUnit.MILLISECONDS;
import static java.util.concurrent.TimeUnit.NANOSECONDS;
import java.io.File;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Date;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.ArrayBlockingQueue;
import java.util.concurrent.BlockingQueue;
import java.util.logging.Level;
import java.util.logging.Logger;
import com.sleepycat.je.Cursor;
import com.sleepycat.je.DatabaseConfig;
import com.sleepycat.je.DatabaseEntry;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.DatabaseNotFoundException;
import com.sleepycat.je.DbInternal;
import com.sleepycat.je.Durability.SyncPolicy;
import com.sleepycat.je.EnvironmentFailureException;
import com.sleepycat.je.LockMode;
import com.sleepycat.je.OperationStatus;
import com.sleepycat.je.StatsConfig;
import com.sleepycat.je.TransactionConfig;
import com.sleepycat.je.config.EnvironmentParams;
import com.sleepycat.je.dbi.CursorImpl.SearchMode;
import com.sleepycat.je.dbi.DatabaseId;
import com.sleepycat.je.dbi.DatabaseImpl;
import com.sleepycat.je.dbi.DbConfigManager;
import com.sleepycat.je.dbi.DbTree.TruncateDbResult;
import com.sleepycat.je.dbi.DbType;
import com.sleepycat.je.dbi.EnvironmentFailureReason;
import com.sleepycat.je.dbi.PutMode;
import com.sleepycat.je.dbi.TriggerManager;
import com.sleepycat.je.log.DbOpReplicationContext;
import com.sleepycat.je.log.FileManager;
import com.sleepycat.je.log.LogEntryType;
import com.sleepycat.je.log.LogManager;
import com.sleepycat.je.log.ReplicationContext;
import com.sleepycat.je.log.entry.DbOperationType;
import com.sleepycat.je.log.entry.LNLogEntry;
import com.sleepycat.je.log.entry.LogEntry;
import com.sleepycat.je.log.entry.NameLNLogEntry;
import com.sleepycat.je.log.entry.SingleItemEntry;
import com.sleepycat.je.recovery.RecoveryInfo;
import com.sleepycat.je.recovery.RollbackTracker;
import com.sleepycat.je.rep.LogFileRewriteListener;
import com.sleepycat.je.rep.SyncupProgress;
import com.sleepycat.je.rep.impl.RepGroupDB;
import com.sleepycat.je.rep.impl.RepImpl;
import com.sleepycat.je.rep.impl.RepParams;
import com.sleepycat.je.rep.stream.InputWireRecord;
import com.sleepycat.je.rep.stream.MasterStatus.MasterSyncException;
import com.sleepycat.je.rep.stream.Protocol;
import com.sleepycat.je.rep.txn.ReplayTxn;
import com.sleepycat.je.rep.utilint.LongMaxZeroStat;
import com.sleepycat.je.rep.utilint.LongMinZeroStat;
import com.sleepycat.je.rep.vlsn.VLSNRange;
import com.sleepycat.je.tree.LN;
import com.sleepycat.je.tree.NameLN;
import com.sleepycat.je.txn.RollbackEnd;
import com.sleepycat.je.txn.RollbackStart;
import com.sleepycat.je.txn.Txn;
import com.sleepycat.je.txn.TxnAbort;
import com.sleepycat.je.txn.TxnCommit;
import com.sleepycat.je.utilint.DbLsn;
import com.sleepycat.je.utilint.LoggerUtils;
import com.sleepycat.je.utilint.LongMaxStat;
import com.sleepycat.je.utilint.LongMinStat;
import com.sleepycat.je.utilint.LongStat;
import com.sleepycat.je.utilint.NanoTimeUtil;
import com.sleepycat.je.utilint.StatGroup;
import com.sleepycat.je.utilint.VLSN;
import com.sleepycat.utilint.StringUtils;
public class Replay