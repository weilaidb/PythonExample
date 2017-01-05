package org.apache.hadoop.hdfs;
import static org.junit.Assert.assertTrue;
import java.io.IOException;
import java.util.LinkedList;
import org.apache.hadoop.fi.DataTransferTestUtil;
import org.apache.hadoop.fi.FiTestUtil;
import org.apache.hadoop.fi.PipelineTest;
import org.apache.hadoop.fi.FiTestUtil.ActionContainer;
import org.apache.hadoop.hdfs.protocol.DatanodeID;
public class PipelinesTestUtil extends DataTransferTestUtil
