package org.apache.hadoop.mapreduce.lib.output;
import java.io.FileNotFoundException;
import java.io.IOException;
import org.apache.hadoop.mapreduce.task.annotation.Checkpointable;
import org.junit.Test;
import static org.mockito.Mockito.*;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.mapreduce.MRJobConfig;
import org.apache.hadoop.mapreduce.TaskAttemptContext;
import org.apache.hadoop.mapreduce.TaskAttemptID;
import org.apache.hadoop.mapreduce.TaskType;
public class TestPreemptableFileOutputCommitter
