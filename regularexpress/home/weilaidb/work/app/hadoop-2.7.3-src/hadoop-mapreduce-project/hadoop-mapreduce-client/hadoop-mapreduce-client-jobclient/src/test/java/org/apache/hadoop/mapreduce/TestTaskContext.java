package org.apache.hadoop.mapreduce;
import java.io.IOException;
import java.util.Iterator;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.LongWritable;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapred.HadoopTestCase;
import org.apache.hadoop.mapreduce.MapReduceTestUtil.DataCopyMapper;
import org.apache.hadoop.mapreduce.MapReduceTestUtil.DataCopyReducer;
import org.junit.AfterClass;
import org.junit.BeforeClass;
import org.junit.Ignore;
import org.junit.Test;
@Ignore
public class TestTaskContext extends HadoopTestCase
