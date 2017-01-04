package com.sleepycat.je.rep.elections;
import static com.sleepycat.je.rep.impl.RepParams.ELECTIONS_OPEN_TIMEOUT;
import static com.sleepycat.je.rep.impl.RepParams.ELECTIONS_READ_TIMEOUT;
import com.sleepycat.je.JEVersion;
import com.sleepycat.je.rep.elections.Proposer.Proposal;
import com.sleepycat.je.rep.elections.Proposer.ProposalParser;
import com.sleepycat.je.rep.impl.RepImpl;
import com.sleepycat.je.rep.impl.TextProtocol;
import com.sleepycat.je.rep.impl.node.NameIdPair;
import com.sleepycat.je.rep.net.DataChannelFactory;
public class Protocol extends TextProtocol
