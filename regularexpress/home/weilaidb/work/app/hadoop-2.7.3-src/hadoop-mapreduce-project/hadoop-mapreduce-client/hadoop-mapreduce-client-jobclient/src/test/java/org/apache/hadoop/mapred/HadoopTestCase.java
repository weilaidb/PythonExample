package org.apache.hadoop.mapred;
import junit.framework.TestCase;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.mapreduce.MRConfig;
import java.io.File;
import java.io.IOException;
public abstract class HadoopTestCase extends TestCase
