package com.sleepycat.je.rep.impl.node;
import static com.sleepycat.je.utilint.VLSN.NULL_VLSN;
import java.util.logging.Logger;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.EnvironmentFailureException;
import com.sleepycat.je.LockNotAvailableException;
import com.sleepycat.je.rep.NodeType;
import com.sleepycat.je.rep.stream.Protocol;
import com.sleepycat.je.utilint.LoggerUtils;
import com.sleepycat.je.utilint.VLSN;
public class LocalCBVLSNUpdater
