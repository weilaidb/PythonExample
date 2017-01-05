package org.apache.hadoop.metrics2.lib;
import org.junit.Test;
import static org.junit.Assert.*;
import static org.mockito.Mockito.*;
import org.apache.hadoop.metrics2.MetricsCollector;
import org.apache.hadoop.metrics2.MetricsException;
import org.apache.hadoop.metrics2.MetricsRecordBuilder;
import org.apache.hadoop.metrics2.MetricsSource;
import org.apache.hadoop.metrics2.annotation.Metric;
import org.apache.hadoop.metrics2.annotation.Metric.*;
import org.apache.hadoop.metrics2.annotation.Metrics;
import org.apache.hadoop.metrics2.impl.MsInfo;
import static org.apache.hadoop.metrics2.lib.Interns.*;
import static org.apache.hadoop.test.MetricsAsserts.*;
public class TestMetricsAnnotations
