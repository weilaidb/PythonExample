package org.apache.hadoop.metrics2.lib;
import java.lang.reflect.Field;
import java.lang.reflect.Method;
import org.apache.commons.lang.StringUtils;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.metrics2.MetricsException;
import org.apache.hadoop.metrics2.MetricsInfo;
import org.apache.hadoop.metrics2.annotation.Metric;
import org.apache.hadoop.metrics2.annotation.Metrics;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class MutableMetricsFactory
