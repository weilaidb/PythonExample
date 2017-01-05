package org.apache.hadoop.mapreduce.lib.map;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.LongWritable;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapred.HadoopTestCase;
import org.apache.hadoop.mapreduce.*;
import java.io.IOException;
public class TestMultithreadedMapper extends HadoopTestCase
