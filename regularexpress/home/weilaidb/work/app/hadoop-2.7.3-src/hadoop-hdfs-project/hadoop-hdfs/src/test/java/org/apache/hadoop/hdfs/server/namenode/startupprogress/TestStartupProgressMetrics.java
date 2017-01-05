package org.apache.hadoop.hdfs.server.namenode.startupprogress;
import static org.apache.hadoop.hdfs.server.namenode.startupprogress.Phase.*;
import static org.apache.hadoop.hdfs.server.namenode.startupprogress.StartupProgressTestHelper.*;
import static org.apache.hadoop.hdfs.server.namenode.startupprogress.StepType.*;
import static org.apache.hadoop.test.MetricsAsserts.*;
import static org.junit.Assert.*;
import org.apache.hadoop.metrics2.MetricsRecordBuilder;
import org.junit.Before;
import org.junit.Test;
public class TestStartupProgressMetrics
