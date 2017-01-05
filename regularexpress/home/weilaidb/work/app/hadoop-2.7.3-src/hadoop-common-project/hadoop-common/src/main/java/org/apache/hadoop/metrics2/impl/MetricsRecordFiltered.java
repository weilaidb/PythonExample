package org.apache.hadoop.metrics2.impl;
import java.util.Iterator;
import java.util.Collection;
import com.google.common.collect.AbstractIterator;
import org.apache.hadoop.metrics2.AbstractMetric;
import org.apache.hadoop.metrics2.MetricsFilter;
import org.apache.hadoop.metrics2.MetricsRecord;
import org.apache.hadoop.metrics2.MetricsTag;
class MetricsRecordFiltered extends AbstractMetricsRecord
