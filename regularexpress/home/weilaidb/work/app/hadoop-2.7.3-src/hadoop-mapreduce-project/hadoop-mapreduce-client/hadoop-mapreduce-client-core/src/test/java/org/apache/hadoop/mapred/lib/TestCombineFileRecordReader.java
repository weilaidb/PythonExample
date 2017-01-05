package org.apache.hadoop.mapred.lib;
import java.io.File;
import java.io.FileWriter;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.LongWritable;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapred.Reporter;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.TextInputFormat;
import org.apache.hadoop.fs.FileUtil;
import org.junit.Test;
import org.mockito.Mockito;
import org.junit.Assert;
import java.io.IOException;
import static org.mockito.Mockito.times;
import static org.mockito.Mockito.verify;
public class TestCombineFileRecordReader
