package com.sleepycat.je.rep.util.ldiff;
import java.nio.ByteBuffer;
import com.sleepycat.je.dbi.EnvironmentImpl;
import com.sleepycat.je.log.LogUtils;
import com.sleepycat.je.rep.impl.node.NameIdPair;
import com.sleepycat.je.rep.utilint.BinaryProtocol;
import com.sleepycat.je.utilint.VLSN;
public class Protocol extends BinaryProtocol
