package com.sleepycat.je.rep;
import java.net.InetSocketAddress;
import java.util.Properties;
import java.util.Set;
import java.util.concurrent.TimeUnit;
import com.sleepycat.je.EnvironmentConfig;
import com.sleepycat.je.ProgressListener;
import com.sleepycat.je.ReplicaConsistencyPolicy;
import com.sleepycat.je.config.EnvironmentParams;
import com.sleepycat.je.dbi.DbConfigManager;
import com.sleepycat.je.dbi.RepConfigProxy;
import com.sleepycat.je.rep.impl.RepParams;
import com.sleepycat.je.rep.stream.FeederFilter;
import com.sleepycat.je.rep.utilint.HostPortPair;
import com.sleepycat.je.rep.utilint.RepUtils;
public class ReplicationConfig extends ReplicationMutableConfig
implements RepConfigProxy
