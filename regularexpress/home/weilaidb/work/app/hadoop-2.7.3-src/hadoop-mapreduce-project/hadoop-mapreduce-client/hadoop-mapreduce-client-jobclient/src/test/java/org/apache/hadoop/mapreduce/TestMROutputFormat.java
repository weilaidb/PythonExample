package org.apache.hadoop.mapreduce;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import org.apache.hadoop.conf.Configurable;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.IntWritable;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.mapred.JobConf;
import org.junit.Test;
import static org.junit.Assert.assertTrue;
public class TestMROutputFormat
class TestInputFormat extends InputFormat<IntWritable, IntWritable>
class TestInputSplit extends InputSplit implements Writable
class TestOutputFormat extends OutputFormat<IntWritable, IntWritable>
implements Configurable
