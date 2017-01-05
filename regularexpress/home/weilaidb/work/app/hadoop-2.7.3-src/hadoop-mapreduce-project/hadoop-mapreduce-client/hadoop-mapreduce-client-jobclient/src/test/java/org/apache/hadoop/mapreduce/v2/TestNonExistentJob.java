package org.apache.hadoop.mapreduce.v2;
import junit.framework.TestCase;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.mapred.JobClient;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.JobID;
import org.apache.hadoop.mapred.MiniMRCluster;
import org.apache.hadoop.mapred.RunningJob;
import org.apache.hadoop.security.authorize.ProxyUsers;
import java.io.IOException;
import java.net.InetAddress;
public class TestNonExistentJob extends TestCase
