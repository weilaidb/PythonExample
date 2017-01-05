package org.apache.hadoop.hdfs.server.datanode;
import java.io.IOException;
import org.apache.hadoop.hdfs.server.protocol.BlockReportContext;
import org.apache.hadoop.hdfs.server.protocol.DatanodeRegistration;
import org.apache.hadoop.hdfs.server.protocol.StorageBlockReport;
import org.apache.hadoop.util.Time;
public class TestNNHandlesBlockReportPerStorage extends BlockReportTestBase
