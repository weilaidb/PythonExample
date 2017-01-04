package com.sleepycat.je.rep;
import java.util.concurrent.TimeUnit;
import com.sleepycat.je.ReplicaConsistencyPolicy;
import com.sleepycat.je.dbi.EnvironmentImpl;
import com.sleepycat.je.rep.impl.RepImpl;
import com.sleepycat.je.rep.impl.node.Replica;
import com.sleepycat.je.utilint.PropUtil;
public class TimeConsistencyPolicy implements ReplicaConsistencyPolicy
