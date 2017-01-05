package org.apache.hadoop.hdfs.server.protocol;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.hdfs.protocol.Block;
import org.apache.hadoop.hdfs.server.common.HdfsServerConstants.ReplicaState;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class ReplicaRecoveryInfo extends Block
