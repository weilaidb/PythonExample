package com.sleepycat.je;
import java.io.Closeable;
import java.io.File;
import java.io.PrintStream;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.logging.Level;
import javax.transaction.xa.Xid;
import com.sleepycat.je.Durability.ReplicaAckPolicy;
import com.sleepycat.je.dbi.DatabaseImpl;
import com.sleepycat.je.dbi.DbConfigManager;
import com.sleepycat.je.dbi.DbEnvPool;
import com.sleepycat.je.dbi.DbTree;
import com.sleepycat.je.dbi.DbTree.TruncateDbResult;
import com.sleepycat.je.dbi.EnvironmentImpl;
import com.sleepycat.je.dbi.RepConfigProxy;
import com.sleepycat.je.dbi.StartupTracker.Phase;
import com.sleepycat.je.dbi.TriggerManager;
import com.sleepycat.je.txn.HandleLocker;
import com.sleepycat.je.txn.Locker;
import com.sleepycat.je.txn.LockerFactory;
import com.sleepycat.je.txn.Txn;
import com.sleepycat.je.utilint.DatabaseUtil;
import com.sleepycat.je.utilint.LoggerUtils;
import com.sleepycat.je.utilint.Pair;
public class Environment implements Closeable