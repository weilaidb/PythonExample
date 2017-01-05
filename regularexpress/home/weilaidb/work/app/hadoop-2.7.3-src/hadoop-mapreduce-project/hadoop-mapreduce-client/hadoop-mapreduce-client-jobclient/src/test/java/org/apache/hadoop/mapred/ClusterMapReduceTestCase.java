package org.apache.hadoop.mapred;
import junit.framework.TestCase;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import java.io.IOException;
import java.util.Map;
import java.util.Properties;
public abstract class ClusterMapReduceTestCase extends TestCase
