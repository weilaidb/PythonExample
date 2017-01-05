package org.apache.hadoop.metrics2.lib;
import static org.apache.hadoop.metrics2.lib.Interns.info;
import java.util.Map;
import java.util.concurrent.Executors;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.TimeUnit;
import org.apache.commons.lang.StringUtils;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.metrics2.MetricsInfo;
import org.apache.hadoop.metrics2.MetricsRecordBuilder;
import org.apache.hadoop.metrics2.util.Quantile;
import org.apache.hadoop.metrics2.util.SampleQuantiles;
import com.google.common.annotations.VisibleForTesting;
import com.google.common.util.concurrent.ThreadFactoryBuilder;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public class MutableQuantiles extends MutableMetric
