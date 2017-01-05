package org.apache.hadoop.metrics2.impl;
import java.util.List;
import static com.google.common.base.Preconditions.*;
import org.apache.hadoop.metrics2.MetricsInfo;
import org.apache.hadoop.metrics2.AbstractMetric;
import org.apache.hadoop.metrics2.MetricsTag;
import static org.apache.hadoop.metrics2.util.Contracts.*;
class MetricsRecordImpl extends AbstractMetricsRecord
