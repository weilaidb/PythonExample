package org.apache.hadoop.hdfs.tools;
import java.io.IOException;
import java.io.PrintStream;
import java.net.InetSocketAddress;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.DFSUtil;
import org.apache.hadoop.hdfs.HdfsConfiguration;
import org.apache.hadoop.hdfs.NameNodeProxies;
import org.apache.hadoop.hdfs.server.namenode.NameNode;
import org.apache.hadoop.tools.GetGroupsBase;
import org.apache.hadoop.tools.GetUserMappingsProtocol;
import org.apache.hadoop.util.ToolRunner;
@InterfaceAudience.Private
public class GetGroups extends GetGroupsBase
