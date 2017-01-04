package com.sleepycat.je.rep.stream;
import java.net.InetSocketAddress;
import java.util.logging.Logger;
import com.sleepycat.je.rep.elections.Learner;
import com.sleepycat.je.rep.elections.MasterValue;
import com.sleepycat.je.rep.elections.Proposer.Proposal;
import com.sleepycat.je.rep.elections.Protocol.Value;
import com.sleepycat.je.rep.impl.node.RepNode;
import com.sleepycat.je.utilint.LoggerUtils;
public class MasterChangeListener implements Learner.Listener
