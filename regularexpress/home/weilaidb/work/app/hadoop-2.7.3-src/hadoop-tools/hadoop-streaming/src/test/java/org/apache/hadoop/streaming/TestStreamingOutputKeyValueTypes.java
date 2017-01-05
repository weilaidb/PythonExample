package org.apache.hadoop.streaming;
import org.apache.hadoop.io.LongWritable;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapred.MapReduceBase;
import org.apache.hadoop.mapred.OutputCollector;
import org.apache.hadoop.mapred.Reducer;
import org.apache.hadoop.mapred.Reporter;
import org.apache.hadoop.mapred.TextInputFormat;
import org.apache.hadoop.mapreduce.MRJobConfig;
import org.junit.Before;
import org.junit.Test;
import java.io.IOException;
import java.util.Iterator;
public class TestStreamingOutputKeyValueTypes extends TestStreaming
