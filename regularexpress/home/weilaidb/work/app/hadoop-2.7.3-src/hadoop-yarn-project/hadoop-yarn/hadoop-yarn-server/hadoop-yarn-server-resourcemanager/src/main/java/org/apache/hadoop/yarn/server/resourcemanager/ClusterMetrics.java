package org.apache.hadoop.yarn.server.resourcemanager;
import static org.apache.hadoop.metrics2.lib.Interns.info;
import java.util.concurrent.atomic.AtomicBoolean;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.metrics2.MetricsInfo;
import org.apache.hadoop.metrics2.MetricsSystem;
import org.apache.hadoop.metrics2.annotation.Metric;
import org.apache.hadoop.metrics2.annotation.Metrics;
import org.apache.hadoop.metrics2.lib.DefaultMetricsSystem;
import org.apache.hadoop.metrics2.lib.MetricsRegistry;
import org.apache.hadoop.metrics2.lib.MutableGaugeInt;
import org.apache.hadoop.metrics2.lib.MutableRate;
import com.google.common.annotations.VisibleForTesting;
@InterfaceAudience.Private
@Metrics(context="yarn")
public class ClusterMetrics
