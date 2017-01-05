package org.apache.hadoop.mapred.pipes;
import java.io.File;
import java.io.IOException;
import org.apache.hadoop.io.FloatWritable;
import org.apache.hadoop.io.NullWritable;
import org.apache.hadoop.mapred.InputSplit;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.RecordReader;
import org.apache.hadoop.mapred.Reporter;
import org.apache.hadoop.mapred.pipes.TestPipeApplication.FakeSplit;
import org.apache.hadoop.util.StringUtils;
import org.junit.Assert;
import org.junit.Test;
import static org.junit.Assert.*;
import static org.mockito.Mockito.*;
public class TestPipesNonJavaInputFormat
