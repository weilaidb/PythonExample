package org.apache.hadoop.mapreduce.lib.output;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.IntWritable;
import org.apache.hadoop.io.LongWritable;
import org.apache.hadoop.io.SequenceFile;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.io.serializer.JavaSerializationComparator;
import org.apache.hadoop.mapred.HadoopTestCase;
import org.apache.hadoop.mapreduce.*;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class TestMRMultipleOutputs extends HadoopTestCase
