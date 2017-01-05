package org.apache.hadoop.hdfs.tools;
import java.io.IOException;
import java.io.PrintStream;
import org.apache.hadoop.hdfs.HdfsConfiguration;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.tools.GetGroupsTestBase;
import org.apache.hadoop.util.Tool;
import org.junit.After;
import org.junit.Before;
public class TestGetGroups extends GetGroupsTestBase
