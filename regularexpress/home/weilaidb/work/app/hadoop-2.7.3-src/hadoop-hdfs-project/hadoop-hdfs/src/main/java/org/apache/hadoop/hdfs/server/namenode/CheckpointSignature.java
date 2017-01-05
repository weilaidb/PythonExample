package org.apache.hadoop.hdfs.server.namenode;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.hdfs.server.common.StorageInfo;
import org.apache.hadoop.hdfs.server.common.HdfsServerConstants.NodeType;
import com.google.common.collect.ComparisonChain;
@InterfaceAudience.Private
public class CheckpointSignature extends StorageInfo
implements Comparable<CheckpointSignature>
