package org.apache.hadoop.mapreduce.lib.join;
import junit.framework.TestCase;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.NullWritable;
import org.apache.hadoop.mapreduce.*;
import org.apache.hadoop.mapreduce.MapReduceTestUtil.Fake_RR;
import org.apache.hadoop.mapreduce.task.TaskAttemptContextImpl;
public class TestWrappedRRClassloader extends TestCase
