package org.apache.hadoop.metrics2.lib;
import java.util.Collection;
import java.util.Map;
import com.google.common.collect.Maps;
import com.google.common.base.Objects;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.metrics2.MetricsInfo;
import org.apache.hadoop.metrics2.MetricsException;
import org.apache.hadoop.metrics2.MetricsRecordBuilder;
import org.apache.hadoop.metrics2.MetricsTag;
import org.apache.hadoop.metrics2.impl.MsInfo;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public class MetricsRegistry
