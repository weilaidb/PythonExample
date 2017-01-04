package com.sleepycat.je.rep.arbiter;
import java.util.Properties;
import java.util.logging.Level;
import com.sleepycat.je.config.ConfigParam;
import com.sleepycat.je.config.EnvironmentParams;
import com.sleepycat.je.dbi.DbConfigManager;
import com.sleepycat.je.rep.impl.RepParams;
public class ArbiterMutableConfig implements Cloneable
