package org.apache.hadoop.streaming;
import java.io.DataOutputStream;
import java.io.File;
import java.io.IOException;
import java.util.Map;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.mapred.MiniMRCluster;
import org.apache.hadoop.util.Shell;
import org.junit.After;
import org.junit.Before;
public class TestFileArgs extends TestStreaming
