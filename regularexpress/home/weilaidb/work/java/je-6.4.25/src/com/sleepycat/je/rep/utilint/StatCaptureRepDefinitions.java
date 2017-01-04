package com.sleepycat.je.rep.utilint;
import java.util.SortedSet;
import java.util.TreeSet;
import com.sleepycat.je.rep.impl.node.FeederManagerStatDefinition;
import com.sleepycat.je.rep.impl.node.ReplayStatDefinition;
import com.sleepycat.je.rep.impl.node.ReplicaStatDefinition;
import com.sleepycat.je.rep.stream.FeederTxnStatDefinition;
import com.sleepycat.je.rep.vlsn.VLSNIndexStatDefinition;
import com.sleepycat.je.statcap.StatCaptureDefinitions;
import com.sleepycat.je.utilint.StatDefinition;
public class StatCaptureRepDefinitions extends StatCaptureDefinitions
