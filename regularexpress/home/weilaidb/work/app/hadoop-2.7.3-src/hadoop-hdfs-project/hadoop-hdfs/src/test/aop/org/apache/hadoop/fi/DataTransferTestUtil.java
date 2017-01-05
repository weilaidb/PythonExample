package org.apache.hadoop.fi;
import java.io.IOException;
import java.util.ArrayList;
import java.util.List;
import org.apache.hadoop.fi.FiTestUtil.Action;
import org.apache.hadoop.fi.FiTestUtil.ActionContainer;
import org.apache.hadoop.fi.FiTestUtil.ConstraintSatisfactionAction;
import org.apache.hadoop.fi.FiTestUtil.CountdownConstraint;
import org.apache.hadoop.fi.FiTestUtil.MarkerConstraint;
import org.apache.hadoop.hdfs.protocol.DatanodeID;
import org.apache.hadoop.hdfs.protocol.LocatedBlock;
import org.apache.hadoop.util.DiskChecker.DiskOutOfSpaceException;
public class DataTransferTestUtil
