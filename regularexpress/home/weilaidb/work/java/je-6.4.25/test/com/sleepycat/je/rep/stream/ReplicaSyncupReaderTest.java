package com.sleepycat.je.rep.stream;
import static org.junit.Assert.assertEquals;
import java.io.File;
import java.util.List;
import org.junit.Test;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.DbInternal;
import com.sleepycat.je.dbi.EnvironmentImpl;
import com.sleepycat.je.log.LogEntryType;
import com.sleepycat.je.log.LogManager;
import com.sleepycat.je.log.ReplicationContext;
import com.sleepycat.je.log.entry.CommitLogEntry;
import com.sleepycat.je.log.entry.SingleItemEntry;
import com.sleepycat.je.recovery.CheckpointEnd;
import com.sleepycat.je.rep.RepInternal;
import com.sleepycat.je.rep.ReplicatedEnvironment;
import com.sleepycat.je.rep.impl.node.NameIdPair;
import com.sleepycat.je.rep.stream.MatchpointSearchResults.PassedTxnInfo;
import com.sleepycat.je.rep.stream.VLSNTestUtils.CheckReader;
import com.sleepycat.je.rep.stream.VLSNTestUtils.CheckWireRecord;
import com.sleepycat.je.rep.stream.VLSNTestUtils.LogPopulator;
import com.sleepycat.je.txn.TxnCommit;
import com.sleepycat.je.utilint.Timestamp;
import com.sleepycat.util.test.SharedTestUtils;
import com.sleepycat.util.test.TestBase;
public class ReplicaSyncupReaderTest extends TestBase