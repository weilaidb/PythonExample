package org.apache.hadoop.hdfs.server.namenode;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.hdfs.server.blockmanagement.BlockInfoContiguous;
import org.apache.hadoop.hdfs.server.blockmanagement.BlockInfoContiguousUnderConstruction;
import org.apache.hadoop.hdfs.server.namenode.INode.BlocksMapUpdateInfo;
@InterfaceAudience.Private
public class FileUnderConstructionFeature implements INode.Feature
