package org.apache.hadoop.hdfs.tools;
import java.net.InetSocketAddress;
import java.util.Map;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.ha.BadFencingConfigurationException;
import org.apache.hadoop.ha.HAServiceTarget;
import org.apache.hadoop.ha.NodeFencer;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.DFSUtil;
import org.apache.hadoop.hdfs.HdfsConfiguration;
import org.apache.hadoop.hdfs.server.namenode.NameNode;
import org.apache.hadoop.net.NetUtils;
import com.google.common.base.Preconditions;
@InterfaceAudience.Private
public class NNHAServiceTarget extends HAServiceTarget
