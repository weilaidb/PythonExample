package org.apache.hadoop.mapreduce.lib.input;
import static org.junit.Assert.assertEquals;
import java.io.IOException;
import java.io.OutputStreamWriter;
import java.io.Writer;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.mapred.UtilsForTests;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.mapreduce.Mapper;
import org.apache.hadoop.mapreduce.Reducer;
import org.apache.hadoop.mapreduce.lib.output.FileOutputFormat;
import org.junit.Test;
public class TestLineRecordReaderJobs
