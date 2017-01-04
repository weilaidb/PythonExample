package com.sleepycat.je.rep.impl;
import java.nio.ByteBuffer;
import com.sleepycat.je.JEVersion;
import com.sleepycat.je.log.LogUtils;
import com.sleepycat.je.rep.NodeState;
import com.sleepycat.je.rep.ReplicatedEnvironment.State;
import com.sleepycat.je.rep.impl.node.NameIdPair;
import com.sleepycat.je.rep.utilint.BinaryProtocol;
public class BinaryNodeStateProtocol extends BinaryProtocol
