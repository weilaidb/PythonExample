package org.apache.hadoop.hdfs.server.datanode;
import java.io.File;
import org.apache.hadoop.hdfs.protocol.Block;
import org.apache.hadoop.hdfs.server.common.HdfsServerConstants.ReplicaState;
import org.apache.hadoop.hdfs.server.datanode.fsdataset.FsVolumeSpi;
public class ReplicaBeingWritten extends ReplicaInPipeline
