package org.apache.hadoop.hdfs.qjournal.server;
import java.io.IOException;
import java.net.InetSocketAddress;
import java.net.URI;
import javax.servlet.ServletContext;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.DFSUtil;
import org.apache.hadoop.hdfs.server.common.JspHelper;
import org.apache.hadoop.http.HttpServer2;
import org.apache.hadoop.net.NetUtils;
@InterfaceAudience.Private
public class JournalNodeHttpServer
