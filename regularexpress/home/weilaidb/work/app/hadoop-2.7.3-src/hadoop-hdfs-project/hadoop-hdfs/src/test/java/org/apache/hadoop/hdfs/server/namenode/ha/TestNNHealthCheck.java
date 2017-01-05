package org.apache.hadoop.hdfs.server.namenode.ha;
import static org.junit.Assert.fail;
import java.io.IOException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.ha.HealthCheckFailedException;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.hdfs.MiniDFSNNTopology;
import org.apache.hadoop.hdfs.server.namenode.NameNodeResourceChecker;
import org.apache.hadoop.hdfs.server.protocol.NamenodeProtocols;
import org.apache.hadoop.test.GenericTestUtils;
import org.junit.Test;
import org.mockito.Mockito;
public class TestNNHealthCheck
