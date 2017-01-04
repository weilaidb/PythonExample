package com.sleepycat.je.rep.arbiter.impl;
import java.io.IOException;
import java.util.concurrent.BlockingQueue;
import com.sleepycat.je.rep.impl.RepImpl;
import com.sleepycat.je.rep.impl.node.ReplicaOutputThreadBase;
import com.sleepycat.je.rep.net.DataChannel;
import com.sleepycat.je.rep.stream.Protocol;
import com.sleepycat.je.utilint.VLSN;
public class ArbiterOutputThread extends ReplicaOutputThreadBase
