package org.apache.hadoop.yarn.webapp.util;
import static org.apache.hadoop.yarn.util.StringHelper.PATH_JOINER;
import java.io.IOException;
import java.net.InetAddress;
import java.net.InetSocketAddress;
import java.net.UnknownHostException;
import java.util.ArrayList;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Evolving;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.http.HttpConfig.Policy;
import org.apache.hadoop.http.HttpServer2;
import org.apache.hadoop.net.NetUtils;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.hadoop.yarn.conf.HAUtil;
import org.apache.hadoop.yarn.exceptions.YarnRuntimeException;
import org.apache.hadoop.yarn.util.RMHAUtils;
@Private
@Evolving
public class WebAppUtils
public static String getRunningLogURL(
String nodeHttpAddress, String containerId, String user)
public static String getAggregatedLogURL(String serverHttpAddress,
String allocatedNode, String containerId, String entity, String user)
public static String getHttpSchemePrefix(Configuration conf)
public static HttpServer2.Builder loadSslConfiguration(
HttpServer2.Builder builder)
public static HttpServer2.Builder loadSslConfiguration(
HttpServer2.Builder builder, Configuration sslConf)
static String getPassword(Configuration conf, String alias)
}
