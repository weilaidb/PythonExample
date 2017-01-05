package org.apache.hadoop.hdfs.server.blockmanagement;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.DFSTestUtil;
import org.apache.hadoop.hdfs.protocol.DatanodeID;
import org.apache.hadoop.hdfs.protocol.HdfsConstants;
import org.apache.hadoop.hdfs.server.namenode.FSNamesystem;
import org.junit.Assert;
import org.junit.Test;
import org.mockito.internal.util.reflection.Whitebox;
import java.io.IOException;
import java.net.InetSocketAddress;
import java.util.Map;
import static org.mockito.Mockito.doReturn;
import static org.mockito.Mockito.mock;
public class TestHostFileManager
