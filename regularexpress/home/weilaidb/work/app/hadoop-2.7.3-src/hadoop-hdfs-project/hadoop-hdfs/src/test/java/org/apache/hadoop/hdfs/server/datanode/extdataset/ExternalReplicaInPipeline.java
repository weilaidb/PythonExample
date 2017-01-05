package org.apache.hadoop.hdfs.server.datanode.extdataset;
import java.io.IOException;
import org.apache.hadoop.hdfs.server.common.HdfsServerConstants.ReplicaState;
import org.apache.hadoop.hdfs.server.datanode.ChunkChecksum;
import org.apache.hadoop.hdfs.server.datanode.ReplicaInPipelineInterface;
import org.apache.hadoop.hdfs.server.datanode.fsdataset.ReplicaOutputStreams;
import org.apache.hadoop.util.DataChecksum;
public class ExternalReplicaInPipeline implements ReplicaInPipelineInterface
