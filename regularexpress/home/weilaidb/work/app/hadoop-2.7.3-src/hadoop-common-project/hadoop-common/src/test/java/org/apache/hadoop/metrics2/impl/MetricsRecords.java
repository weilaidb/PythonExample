package org.apache.hadoop.metrics2.impl;
import com.google.common.base.Predicate;
import com.google.common.collect.Iterables;
import org.apache.hadoop.metrics2.AbstractMetric;
import org.apache.hadoop.metrics2.MetricsRecord;
import org.apache.hadoop.metrics2.MetricsTag;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertNotNull;
public class MetricsRecords
