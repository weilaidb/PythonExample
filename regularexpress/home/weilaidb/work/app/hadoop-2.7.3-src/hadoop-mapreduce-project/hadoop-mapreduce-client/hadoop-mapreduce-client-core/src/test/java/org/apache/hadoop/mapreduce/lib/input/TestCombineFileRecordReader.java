package org.apache.hadoop.mapreduce.lib.input;
import java.io.FileWriter;
import java.io.IOException;
import java.io.File;
import org.junit.Assert;
import org.apache.hadoop.fs.FileUtil;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.LongWritable;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapreduce.TaskAttemptContext;
import org.apache.hadoop.mapreduce.task.TaskAttemptContextImpl;
import org.apache.hadoop.mapreduce.TaskAttemptID;
import org.apache.hadoop.mapred.Task.TaskReporter;
import org.mockito.Mockito;
import org.junit.Test;
import static org.mockito.Mockito.times;
import static org.mockito.Mockito.verify;
public class TestCombineFileRecordReader
