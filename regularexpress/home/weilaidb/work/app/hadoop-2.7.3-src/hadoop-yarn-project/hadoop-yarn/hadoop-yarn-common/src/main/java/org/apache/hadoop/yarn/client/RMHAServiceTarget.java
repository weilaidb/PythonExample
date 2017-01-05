package org.apache.hadoop.yarn.client;
import org.apache.hadoop.ha.BadFencingConfigurationException;
import org.apache.hadoop.ha.HAServiceTarget;
import org.apache.hadoop.ha.NodeFencer;
import org.apache.hadoop.yarn.conf.HAUtil;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import java.io.IOException;
import java.net.InetSocketAddress;
public class RMHAServiceTarget extends HAServiceTarget
