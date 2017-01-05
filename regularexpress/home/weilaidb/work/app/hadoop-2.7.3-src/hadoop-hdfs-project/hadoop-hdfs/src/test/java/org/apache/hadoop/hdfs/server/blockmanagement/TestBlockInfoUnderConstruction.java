package org.apache.hadoop.hdfs.server.blockmanagement;
import static org.junit.Assert.assertEquals;
import org.apache.hadoop.hdfs.DFSTestUtil;
import org.apache.hadoop.hdfs.protocol.Block;
import org.apache.hadoop.hdfs.server.common.GenerationStamp;
import org.apache.hadoop.hdfs.server.common.HdfsServerConstants.BlockUCState;
import org.apache.hadoop.util.Time;
import org.junit.Test;
public class TestBlockInfoUnderConstruction
