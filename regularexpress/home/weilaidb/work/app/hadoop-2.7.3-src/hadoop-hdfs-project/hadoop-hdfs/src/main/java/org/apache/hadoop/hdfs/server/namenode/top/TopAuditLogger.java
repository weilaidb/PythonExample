package org.apache.hadoop.hdfs.server.namenode.top;
import java.net.InetAddress;
import com.google.common.base.Preconditions;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.hdfs.server.namenode.AuditLogger;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import org.apache.hadoop.hdfs.server.namenode.top.metrics.TopMetrics;
@InterfaceAudience.Private
public class TopAuditLogger implements AuditLogger
