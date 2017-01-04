package com.sleepycat.je.rep;
import java.util.concurrent.TimeUnit;
import com.sleepycat.je.ReplicaConsistencyPolicy;
import com.sleepycat.je.dbi.EnvironmentImpl;
public class NoConsistencyRequiredPolicy implements ReplicaConsistencyPolicy
