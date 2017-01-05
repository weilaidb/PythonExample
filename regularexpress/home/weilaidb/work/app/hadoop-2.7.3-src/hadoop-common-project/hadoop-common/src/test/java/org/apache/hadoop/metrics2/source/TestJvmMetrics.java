package org.apache.hadoop.metrics2.source;
import org.junit.Test;
import static org.mockito.Mockito.*;
import static org.apache.hadoop.test.MetricsAsserts.*;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.metrics2.MetricsCollector;
import org.apache.hadoop.metrics2.MetricsRecordBuilder;
import org.apache.hadoop.util.JvmPauseMonitor;
import static org.apache.hadoop.metrics2.source.JvmMetricsInfo.*;
import static org.apache.hadoop.metrics2.impl.MsInfo.*;
public class TestJvmMetrics
