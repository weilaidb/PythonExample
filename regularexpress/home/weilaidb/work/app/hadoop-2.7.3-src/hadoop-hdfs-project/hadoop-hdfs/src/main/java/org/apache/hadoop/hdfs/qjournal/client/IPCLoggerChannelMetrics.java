package org.apache.hadoop.hdfs.qjournal.client;
import java.net.InetSocketAddress;
import java.util.Map;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.HdfsConfiguration;
import org.apache.hadoop.metrics2.annotation.Metric;
import org.apache.hadoop.metrics2.annotation.Metrics;
import org.apache.hadoop.metrics2.lib.DefaultMetricsSystem;
import org.apache.hadoop.metrics2.lib.MetricsRegistry;
import org.apache.hadoop.metrics2.lib.MutableQuantiles;
import com.google.common.collect.Maps;
@Metrics(about="Journal client metrics", context="dfs")
class IPCLoggerChannelMetrics
