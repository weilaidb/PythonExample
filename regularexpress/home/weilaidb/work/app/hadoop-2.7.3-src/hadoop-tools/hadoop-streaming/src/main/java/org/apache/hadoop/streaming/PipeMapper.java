package org.apache.hadoop.streaming;
import java.io.*;
import java.net.URLDecoder;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.Mapper;
import org.apache.hadoop.mapred.Reporter;
import org.apache.hadoop.mapred.OutputCollector;
import org.apache.hadoop.mapred.SkipBadRecords;
import org.apache.hadoop.mapred.TextInputFormat;
import org.apache.hadoop.mapreduce.MRJobConfig;
import org.apache.hadoop.streaming.io.InputWriter;
import org.apache.hadoop.streaming.io.OutputReader;
import org.apache.hadoop.streaming.io.TextInputWriter;
public class PipeMapper extends PipeMapRed implements Mapper
