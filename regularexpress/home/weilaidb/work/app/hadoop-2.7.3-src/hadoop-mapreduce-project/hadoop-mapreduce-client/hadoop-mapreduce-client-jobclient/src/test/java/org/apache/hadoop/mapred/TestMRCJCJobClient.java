package org.apache.hadoop.mapred;
import java.io.IOException;
import java.io.OutputStream;
import java.io.OutputStreamWriter;
import java.io.Writer;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.LongWritable;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapreduce.TestMRJobClient;
import org.apache.hadoop.mapreduce.tools.CLI;
import org.apache.hadoop.util.Tool;
import org.junit.Ignore;
@Ignore
public class TestMRCJCJobClient extends TestMRJobClient
