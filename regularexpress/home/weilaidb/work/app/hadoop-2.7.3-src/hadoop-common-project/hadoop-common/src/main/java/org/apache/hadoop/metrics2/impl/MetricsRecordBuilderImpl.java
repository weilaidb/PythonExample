package org.apache.hadoop.metrics2.impl;
import java.util.Collections;
import java.util.List;
import com.google.common.collect.Lists;
import org.apache.hadoop.metrics2.AbstractMetric;
import org.apache.hadoop.metrics2.MetricsInfo;
import org.apache.hadoop.metrics2.MetricsCollector;
import org.apache.hadoop.metrics2.MetricsFilter;
import org.apache.hadoop.metrics2.MetricsRecordBuilder;
import org.apache.hadoop.metrics2.MetricsTag;
import org.apache.hadoop.metrics2.lib.Interns;
import org.apache.hadoop.util.Time;
class MetricsRecordBuilderImpl extends MetricsRecordBuilder
