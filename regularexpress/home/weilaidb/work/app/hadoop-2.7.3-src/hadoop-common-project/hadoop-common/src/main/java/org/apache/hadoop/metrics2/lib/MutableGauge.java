package org.apache.hadoop.metrics2.lib;
import static com.google.common.base.Preconditions.*;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.metrics2.MetricsInfo;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public abstract class MutableGauge extends MutableMetric
