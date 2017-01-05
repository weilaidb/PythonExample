package org.apache.hadoop.metrics2.lib;
import org.junit.Ignore;
import org.junit.Test;
import static org.junit.Assert.*;
import static org.mockito.Mockito.*;
import org.apache.hadoop.metrics2.MetricsException;
import org.apache.hadoop.metrics2.MetricsRecordBuilder;
import static org.apache.hadoop.metrics2.lib.Interns.*;
import static org.apache.hadoop.test.MetricsAsserts.*;
public class TestMetricsRegistry
