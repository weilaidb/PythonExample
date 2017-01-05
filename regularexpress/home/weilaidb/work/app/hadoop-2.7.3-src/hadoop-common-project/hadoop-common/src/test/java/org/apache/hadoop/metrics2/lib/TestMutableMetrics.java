package org.apache.hadoop.metrics2.lib;
import static org.apache.hadoop.metrics2.lib.Interns.info;
import static org.apache.hadoop.test.MetricsAsserts.assertCounter;
import static org.apache.hadoop.test.MetricsAsserts.assertGauge;
import static org.apache.hadoop.test.MetricsAsserts.mockMetricsRecordBuilder;
import static org.mockito.AdditionalMatchers.eq;
import static org.mockito.AdditionalMatchers.geq;
import static org.mockito.AdditionalMatchers.leq;
import static org.mockito.Matchers.anyLong;
import static org.mockito.Matchers.eq;
import static org.mockito.Mockito.times;
import static org.mockito.Mockito.verify;
import java.util.Map;
import java.util.Map.Entry;
import org.apache.hadoop.metrics2.MetricsRecordBuilder;
import org.apache.hadoop.metrics2.util.Quantile;
import org.junit.Test;
public class TestMutableMetrics
