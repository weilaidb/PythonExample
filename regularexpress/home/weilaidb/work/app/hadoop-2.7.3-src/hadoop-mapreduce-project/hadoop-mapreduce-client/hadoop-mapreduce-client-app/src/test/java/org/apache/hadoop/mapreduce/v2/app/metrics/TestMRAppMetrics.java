package org.apache.hadoop.mapreduce.v2.app.metrics;
import org.apache.hadoop.mapreduce.v2.app.job.Job;
import org.apache.hadoop.mapreduce.v2.api.records.TaskType;
import org.apache.hadoop.mapreduce.v2.app.job.Task;
import org.apache.hadoop.metrics2.MetricsRecordBuilder;
import static org.apache.hadoop.test.MetricsAsserts.*;
import static org.apache.hadoop.test.MockitoMaker.*;
import org.junit.Test;
import static org.mockito.Mockito.*;
public class TestMRAppMetrics
