package org.apache.hadoop.metrics2.lib;
import java.lang.reflect.Method;
import java.util.Set;
import static com.google.common.base.Preconditions.*;
import com.google.common.collect.Sets;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.metrics2.MetricsRecordBuilder;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public class MutableRates extends MutableMetric
