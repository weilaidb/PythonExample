package org.apache.hadoop.hdfs.server.namenode;
import java.io.IOException;
import java.net.InetSocketAddress;
import java.util.HashMap;
import java.util.Map;
import javax.servlet.ServletContext;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.DFSUtil;
import org.apache.hadoop.hdfs.server.common.JspHelper;
import org.apache.hadoop.hdfs.server.namenode.startupprogress.StartupProgress;
import org.apache.hadoop.hdfs.server.namenode.web.resources.NamenodeWebHdfsMethods;
import org.apache.hadoop.hdfs.web.WebHdfsFileSystem;
import org.apache.hadoop.hdfs.web.resources.Param;
import org.apache.hadoop.hdfs.web.resources.UserParam;
import org.apache.hadoop.http.HttpConfig;
import org.apache.hadoop.http.HttpServer2;
import org.apache.hadoop.net.NetUtils;
import org.apache.hadoop.security.SecurityUtil;
import org.apache.hadoop.security.UserGroupInformation;
@InterfaceAudience.Private
public class NameNodeHttpServer {
private HttpServer2 httpServer;
private final Configuration conf;
private final NameNode nn;
private InetSocketAddress httpAddress;
private InetSocketAddress httpsAddress;
private final InetSocketAddress bindAddress;
public static final String NAMENODE_ADDRESS_ATTRIBUTE_KEY = "name.node.address";
public static final String FSIMAGE_ATTRIBUTE_KEY = "name.system.image";
protected static final String NAMENODE_ATTRIBUTE_KEY = "name.node";
public static final String STARTUP_PROGRESS_ATTRIBUTE_KEY = "startup.progress";
NameNodeHttpServer(Configuration conf, NameNode nn,
InetSocketAddress bindAddress)
private void initWebHdfs(Configuration conf) throws IOException {
if (WebHdfsFileSystem.isEnabled(conf, HttpServer2.LOG)) {
UserParam.setUserPattern(conf.get(
DFSConfigKeys.DFS_WEBHDFS_USER_PATTERN_KEY,
DFSConfigKeys.DFS_WEBHDFS_USER_PATTERN_DEFAULT));
final String className = conf.get(
DFSConfigKeys.DFS_WEBHDFS_AUTHENTICATION_FILTER_KEY,
DFSConfigKeys.DFS_WEBHDFS_AUTHENTICATION_FILTER_DEFAULT);
final String name = className;
final String pathSpec = WebHdfsFileSystem.PATH_PREFIX + "
void start() throws IOException
private Map<String, String> getAuthFilterParams(Configuration conf)
throws IOException
void stop() throws Exception
InetSocketAddress getHttpAddress()
InetSocketAddress getHttpsAddress()
void setFSImage(FSImage fsImage)
void setNameNodeAddress(InetSocketAddress nameNodeAddress)
void setStartupProgress(StartupProgress prog)
private static void setupServlets(HttpServer2 httpServer, Configuration conf)
