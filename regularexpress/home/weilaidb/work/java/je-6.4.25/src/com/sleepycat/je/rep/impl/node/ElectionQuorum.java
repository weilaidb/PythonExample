package com.sleepycat.je.rep.impl.node;
import java.util.logging.Logger;
import com.sleepycat.je.rep.NodeType;
import com.sleepycat.je.rep.QuorumPolicy;
import com.sleepycat.je.rep.arbitration.Arbiter;
import com.sleepycat.je.rep.impl.RepImpl;
import com.sleepycat.je.rep.impl.RepParams;
import com.sleepycat.je.rep.stream.MasterStatus;
import com.sleepycat.je.utilint.LoggerUtils;
public class ElectionQuorum
