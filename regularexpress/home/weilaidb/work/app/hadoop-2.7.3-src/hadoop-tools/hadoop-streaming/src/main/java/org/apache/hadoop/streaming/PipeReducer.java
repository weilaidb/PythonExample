package org.apache.hadoop.streaming;
import java.io.IOException;
import java.io.UnsupportedEncodingException;
import java.util.Iterator;
import java.net.URLDecoder;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.Reducer;
import org.apache.hadoop.mapred.Reporter;
import org.apache.hadoop.mapred.OutputCollector;
import org.apache.hadoop.mapred.SkipBadRecords;
import org.apache.hadoop.mapreduce.MRJobConfig;
import org.apache.hadoop.streaming.io.InputWriter;
import org.apache.hadoop.streaming.io.OutputReader;
import org.apache.hadoop.io.Writable;
public class PipeReducer extends PipeMapRed implements Reducer
