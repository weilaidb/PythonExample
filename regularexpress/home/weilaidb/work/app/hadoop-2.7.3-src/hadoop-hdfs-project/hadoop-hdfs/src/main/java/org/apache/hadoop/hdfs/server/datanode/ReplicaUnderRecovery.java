package org.apache.hadoop.hdfs.server.datanode;
import java.io.File;
import org.apache.hadoop.hdfs.server.common.HdfsServerConstants.ReplicaState;
import org.apache.hadoop.hdfs.server.datanode.fsdataset.FsVolumeSpi;
import org.apache.hadoop.hdfs.server.protocol.ReplicaRecoveryInfo;
public class ReplicaUnderRecovery extends ReplicaInfo
