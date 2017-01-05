package org.apache.hadoop.metrics2.lib;
import org.apache.commons.lang.StringUtils;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.metrics2.MetricsInfo;
import org.apache.hadoop.metrics2.MetricsRecordBuilder;
import org.apache.hadoop.metrics2.util.SampleStat;
import static org.apache.hadoop.metrics2.lib.Interns.*;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public class MutableStat extends MutableMetric
