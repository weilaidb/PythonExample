package org.apache.hadoop.mapred.lib;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.LongWritable;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapred.*;
import java.io.DataOutputStream;
import java.io.IOException;
import java.util.Iterator;
public class TestChainMapReduce extends HadoopTestCase
