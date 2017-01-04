package com.sleepycat.je.rep;
import java.io.Serializable;
import java.util.Enumeration;
import java.util.Properties;
import com.sleepycat.je.Durability;
import com.sleepycat.je.config.ConfigParam;
import com.sleepycat.je.config.EnvironmentParams;
import com.sleepycat.je.dbi.DbConfigManager;
import com.sleepycat.je.rep.impl.RepImpl;
import com.sleepycat.je.rep.impl.RepParams;
public class ReplicationMutableConfig implements Cloneable, Serializable
