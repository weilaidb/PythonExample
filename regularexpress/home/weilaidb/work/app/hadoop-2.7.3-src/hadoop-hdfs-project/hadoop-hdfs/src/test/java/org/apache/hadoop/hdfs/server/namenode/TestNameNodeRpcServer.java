package org.apache.hadoop.hdfs.server.namenode;
import static org.apache.hadoop.hdfs.DFSConfigKeys.DFS_NAMENODE_RPC_BIND_HOST_KEY;
import static org.junit.Assert.assertEquals;
import java.io.IOException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.HdfsConfiguration;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.junit.Test;
public class TestNameNodeRpcServer
