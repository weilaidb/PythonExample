package org.apache.hadoop.hdfs.server.namenode.ha;
import java.io.IOException;
import java.io.PrintStream;
import org.apache.hadoop.hdfs.HdfsConfiguration;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.hdfs.MiniDFSNNTopology;
import org.apache.hadoop.hdfs.tools.GetGroups;
import org.apache.hadoop.tools.GetGroupsTestBase;
import org.apache.hadoop.util.Tool;
import org.junit.After;
import org.junit.Before;
public class TestGetGroupsWithHA extends GetGroupsTestBase
