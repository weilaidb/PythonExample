package org.apache.hadoop.hdfs.server.blockmanagement;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertNull;
import java.util.Queue;
import org.apache.hadoop.hdfs.DFSTestUtil;
import org.apache.hadoop.hdfs.protocol.Block;
import org.apache.hadoop.hdfs.server.blockmanagement.PendingDataNodeMessages.ReportedBlockInfo;
import org.apache.hadoop.hdfs.server.common.HdfsServerConstants.ReplicaState;
import org.apache.hadoop.hdfs.server.protocol.DatanodeStorage;
import org.junit.Test;
import com.google.common.base.Joiner;
public class TestPendingDataNodeMessages
