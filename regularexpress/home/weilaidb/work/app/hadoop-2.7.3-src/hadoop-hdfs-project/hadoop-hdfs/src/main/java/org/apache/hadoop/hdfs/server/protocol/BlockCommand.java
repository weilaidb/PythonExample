package org.apache.hadoop.hdfs.server.protocol;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.StorageType;
import org.apache.hadoop.hdfs.protocol.Block;
import org.apache.hadoop.hdfs.protocol.DatanodeInfo;
import org.apache.hadoop.hdfs.server.blockmanagement.DatanodeDescriptor.BlockTargetPair;
import org.apache.hadoop.hdfs.server.blockmanagement.DatanodeStorageInfo;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class BlockCommand extends DatanodeCommand
