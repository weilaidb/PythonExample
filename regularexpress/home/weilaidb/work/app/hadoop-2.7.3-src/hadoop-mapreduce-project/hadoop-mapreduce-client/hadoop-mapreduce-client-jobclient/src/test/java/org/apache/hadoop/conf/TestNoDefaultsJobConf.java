package org.apache.hadoop.conf;
import org.junit.Assert;
import org.apache.hadoop.mapred.*;
import org.apache.hadoop.mapreduce.MRConfig;
import org.apache.hadoop.mapreduce.server.jobtracker.JTConfig;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.FileUtil;
import org.apache.hadoop.io.LongWritable;
import org.apache.hadoop.io.Text;
import java.io.*;
public class TestNoDefaultsJobConf extends HadoopTestCase
