package org.apache.hadoop.hdfs.server.datanode;
import java.io.IOException;
import org.apache.hadoop.fi.DataTransferTestUtil;
import org.apache.hadoop.fi.DataTransferTestUtil.DataNodeAction;
import org.apache.hadoop.fi.DataTransferTestUtil.DataTransferTest;
import org.apache.hadoop.fi.DataTransferTestUtil.DatanodeMarkingAction;
import org.apache.hadoop.fi.DataTransferTestUtil.IoeAction;
import org.apache.hadoop.fi.DataTransferTestUtil.OomAction;
import org.apache.hadoop.fi.DataTransferTestUtil.SleepAction;
import org.apache.hadoop.fi.FiTestUtil;
import org.apache.hadoop.fi.FiTestUtil.Action;
import org.apache.hadoop.fi.FiTestUtil.ConstraintSatisfactionAction;
import org.apache.hadoop.fi.FiTestUtil.MarkerConstraint;
import org.apache.hadoop.hdfs.protocol.DatanodeID;
import org.junit.Test;
public class TestFiPipelineClose
