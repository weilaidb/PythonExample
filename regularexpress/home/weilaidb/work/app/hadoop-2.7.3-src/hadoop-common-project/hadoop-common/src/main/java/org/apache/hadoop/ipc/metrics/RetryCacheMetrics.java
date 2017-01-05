package org.apache.hadoop.ipc.metrics;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.ipc.RetryCache;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.metrics2.annotation.Metric;
import org.apache.hadoop.metrics2.annotation.Metrics;
import org.apache.hadoop.metrics2.lib.DefaultMetricsSystem;
import org.apache.hadoop.metrics2.lib.MetricsRegistry;
import org.apache.hadoop.metrics2.lib.MutableCounterLong;
@InterfaceAudience.Private
@Metrics(about="Aggregate RetryCache metrics", context="rpc")
public class RetryCacheMetrics
