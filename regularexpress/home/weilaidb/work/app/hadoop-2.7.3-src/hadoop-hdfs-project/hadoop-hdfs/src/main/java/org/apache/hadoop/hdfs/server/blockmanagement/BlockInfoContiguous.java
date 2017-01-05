package org.apache.hadoop.hdfs.server.blockmanagement;
import java.util.LinkedList;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.hdfs.protocol.Block;
import org.apache.hadoop.hdfs.server.common.HdfsServerConstants.BlockUCState;
import org.apache.hadoop.util.LightWeightGSet;
@InterfaceAudience.Private
public class BlockInfoContiguous extends Block
implements LightWeightGSet.LinkedElement
