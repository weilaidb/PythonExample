package com.sleepycat.je.rep.monitor;
import java.net.InetSocketAddress;
import java.util.Properties;
import java.util.Set;
import com.sleepycat.je.dbi.DbConfigManager;
import com.sleepycat.je.rep.NodeType;
import com.sleepycat.je.rep.ReplicationConfig;
import com.sleepycat.je.rep.ReplicationNetworkConfig;
import com.sleepycat.je.rep.impl.RepParams;
import com.sleepycat.je.rep.utilint.HostPortPair;
public class MonitorConfig implements Cloneable
