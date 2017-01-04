package com.sleepycat.je.rep.impl;
import java.util.concurrent.TimeUnit;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.ReplicaConsistencyPolicy;
import com.sleepycat.je.dbi.EnvironmentImpl;
import com.sleepycat.je.rep.ReplicaConsistencyException;
import com.sleepycat.je.rep.impl.node.Replica;
import com.sleepycat.je.utilint.PropUtil;
import com.sleepycat.je.utilint.VLSN;
public class PointConsistencyPolicy
implements ReplicaConsistencyPolicy
