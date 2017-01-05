package org.apache.hadoop.hdfs.server.namenode.ha;
import static org.junit.Assert.assertEquals;
import java.io.IOException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FSDataOutputStream;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.hdfs.AppendTestUtil;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.DFSUtil;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.hdfs.MiniDFSNNTopology;
import org.apache.hadoop.hdfs.server.namenode.TestFileTruncate;
import org.apache.hadoop.hdfs.tools.DFSck;
import org.apache.hadoop.util.ToolRunner;
import org.junit.Test;
public class TestHAAppend
