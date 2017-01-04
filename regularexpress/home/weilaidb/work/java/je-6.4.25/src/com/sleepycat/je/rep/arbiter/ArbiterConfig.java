package com.sleepycat.je.rep.arbiter;
import java.util.Properties;
import java.util.concurrent.TimeUnit;
import com.sleepycat.je.config.ConfigParam;
import com.sleepycat.je.config.EnvironmentParams;
import com.sleepycat.je.dbi.DbConfigManager;
import com.sleepycat.je.rep.ReplicationNetworkConfig;
import com.sleepycat.je.rep.impl.RepParams;
public class ArbiterConfig extends ArbiterMutableConfig implements Cloneable
