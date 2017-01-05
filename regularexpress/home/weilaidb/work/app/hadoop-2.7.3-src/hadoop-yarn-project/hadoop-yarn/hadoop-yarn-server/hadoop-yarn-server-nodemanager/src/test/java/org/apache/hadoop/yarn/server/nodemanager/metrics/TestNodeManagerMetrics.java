package org.apache.hadoop.yarn.server.nodemanager.metrics;
import org.apache.hadoop.metrics2.lib.DefaultMetricsSystem;
import org.apache.hadoop.metrics2.MetricsRecordBuilder;
import static org.apache.hadoop.test.MetricsAsserts.*;
import org.apache.hadoop.yarn.api.records.Resource;
import org.apache.hadoop.yarn.util.Records;
import org.junit.Assert;
import org.junit.Test;
public class TestNodeManagerMetrics
