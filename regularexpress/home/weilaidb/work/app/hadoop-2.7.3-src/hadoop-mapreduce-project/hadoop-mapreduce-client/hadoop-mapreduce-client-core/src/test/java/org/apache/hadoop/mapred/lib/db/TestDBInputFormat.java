package org.apache.hadoop.mapred.lib.db;
import java.sql.DriverManager;
import org.apache.hadoop.io.LongWritable;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.RecordReader;
import org.apache.hadoop.mapred.Reporter;
import org.apache.hadoop.mapred.lib.db.DBInputFormat.DBInputSplit;
import org.apache.hadoop.mapred.lib.db.DBInputFormat.DBRecordReader;
import org.apache.hadoop.mapred.lib.db.DBInputFormat.NullDBWritable;
import org.apache.hadoop.mapred.InputSplit;
import org.apache.hadoop.mapreduce.MRJobConfig;
import org.apache.hadoop.mapred.lib.db.DBConfiguration;
import org.apache.hadoop.mapreduce.lib.db.DriverForTest;
import org.junit.Test;
import static org.junit.Assert.*;
import static org.mockito.Mockito.*;
public class TestDBInputFormat
