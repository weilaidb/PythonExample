package org.apache.hadoop.metrics2.impl;
import java.util.List;
import org.junit.Test;
import static org.junit.Assert.*;
import org.junit.runner.RunWith;
import static org.mockito.Mockito.*;
import org.mockito.ArgumentCaptor;
import org.mockito.Captor;
import org.mockito.runners.MockitoJUnitRunner;
import org.apache.hadoop.metrics2.MetricsVisitor;
import org.apache.hadoop.metrics2.AbstractMetric;
import org.apache.hadoop.metrics2.MetricsInfo;
import static org.apache.hadoop.metrics2.lib.Interns.*;
import org.apache.hadoop.metrics2.lib.MetricsRegistry;
@RunWith(MockitoJUnitRunner.class)
public class TestMetricsVisitor
