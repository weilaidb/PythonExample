package org.apache.hadoop.ipc;
import org.apache.hadoop.ipc.metrics.RetryCacheMetrics;
import org.apache.hadoop.metrics2.MetricsRecordBuilder;
import org.junit.Test;
import static org.apache.hadoop.test.MetricsAsserts.assertCounter;
import static org.apache.hadoop.test.MetricsAsserts.getMetrics;
import static org.mockito.Mockito.*;
public class TestRetryCacheMetrics
