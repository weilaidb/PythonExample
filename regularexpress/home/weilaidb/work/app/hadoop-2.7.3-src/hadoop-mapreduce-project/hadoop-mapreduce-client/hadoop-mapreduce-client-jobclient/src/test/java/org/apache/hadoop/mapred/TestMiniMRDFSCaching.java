package org.apache.hadoop.mapred;
import java.io.*;
import junit.framework.TestCase;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.mapred.MRCaching.TestResult;
import org.junit.Ignore;
@Ignore
public class TestMiniMRDFSCaching extends TestCase
