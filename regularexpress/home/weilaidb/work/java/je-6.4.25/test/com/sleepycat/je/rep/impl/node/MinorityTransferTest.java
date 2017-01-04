package com.sleepycat.je.rep.impl.node;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;
import static org.junit.Assert.fail;
import java.util.HashSet;
import java.util.Set;
import java.util.concurrent.TimeUnit;
import com.sleepycat.je.Transaction;
import org.junit.Test;
import com.sleepycat.je.EnvironmentFailureException;
import com.sleepycat.je.rep.ReplicaWriteException;
import com.sleepycat.je.rep.ReplicatedEnvironment;
import com.sleepycat.je.rep.ReplicationConfig;
import com.sleepycat.je.rep.impl.RepTestBase;
import com.sleepycat.je.rep.utilint.RepTestUtils.RepEnvInfo;
import com.sleepycat.je.rep.UnknownMasterException;
public class MinorityTransferTest extends RepTestBase
