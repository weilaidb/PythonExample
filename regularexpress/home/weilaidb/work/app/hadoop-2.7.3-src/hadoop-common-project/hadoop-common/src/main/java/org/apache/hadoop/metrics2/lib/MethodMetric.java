package org.apache.hadoop.metrics2.lib;
import java.lang.reflect.Method;
import static com.google.common.base.Preconditions.*;
import org.apache.commons.lang.StringUtils;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.metrics2.MetricsException;
import org.apache.hadoop.metrics2.MetricsRecordBuilder;
import org.apache.hadoop.metrics2.MetricsInfo;
import org.apache.hadoop.metrics2.annotation.Metric;
import static org.apache.hadoop.metrics2.util.Contracts.*;
class MethodMetric extends MutableMetric
