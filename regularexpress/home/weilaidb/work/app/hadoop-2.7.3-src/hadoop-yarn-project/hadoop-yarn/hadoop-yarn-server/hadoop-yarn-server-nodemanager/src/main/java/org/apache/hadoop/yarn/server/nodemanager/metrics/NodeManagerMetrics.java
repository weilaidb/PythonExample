package org.apache.hadoop.yarn.server.nodemanager.metrics;
import org.apache.hadoop.metrics2.MetricsSystem;
import org.apache.hadoop.metrics2.annotation.Metric;
import org.apache.hadoop.metrics2.annotation.Metrics;
import org.apache.hadoop.metrics2.lib.DefaultMetricsSystem;
import org.apache.hadoop.metrics2.lib.MutableCounterInt;
import org.apache.hadoop.metrics2.lib.MutableGaugeInt;
import org.apache.hadoop.metrics2.lib.MutableRate;
import org.apache.hadoop.metrics2.source.JvmMetrics;
import org.apache.hadoop.yarn.api.records.Resource;
import com.google.common.annotations.VisibleForTesting;
@Metrics(about="Metrics for node manager", context="yarn")
public class NodeManagerMetrics
