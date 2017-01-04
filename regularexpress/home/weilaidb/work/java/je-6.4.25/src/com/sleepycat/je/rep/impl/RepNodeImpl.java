package com.sleepycat.je.rep.impl;
import java.io.Serializable;
import java.net.InetSocketAddress;
import com.sleepycat.je.EnvironmentFailureException;
import com.sleepycat.je.JEVersion;
import com.sleepycat.je.rep.NodeType;
import com.sleepycat.je.rep.ReplicationConfig;
import com.sleepycat.je.rep.ReplicationNode;
import com.sleepycat.je.rep.impl.RepGroupImpl.BarrierState;
import com.sleepycat.je.rep.impl.node.NameIdPair;
import com.sleepycat.je.rep.stream.Protocol;
import com.sleepycat.je.rep.utilint.HostPortPair;
import com.sleepycat.je.utilint.VLSN;
public class RepNodeImpl implements ReplicationNode, Serializable
