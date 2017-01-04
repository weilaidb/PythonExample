package com.sleepycat.je.rep.stream;
import java.net.InetSocketAddress;
import com.sleepycat.je.rep.elections.Acceptor;
import com.sleepycat.je.rep.elections.MasterValue;
import com.sleepycat.je.rep.elections.Proposer.Proposal;
import com.sleepycat.je.rep.elections.Protocol.Value;
import com.sleepycat.je.rep.impl.node.RepNode;
public class MasterSuggestionGenerator
implements Acceptor.SuggestionGenerator
