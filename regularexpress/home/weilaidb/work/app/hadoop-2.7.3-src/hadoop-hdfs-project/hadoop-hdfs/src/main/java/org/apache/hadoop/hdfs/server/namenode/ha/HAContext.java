package org.apache.hadoop.hdfs.server.namenode.ha;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.ha.ServiceFailedException;
import org.apache.hadoop.hdfs.server.namenode.NameNode.OperationCategory;
import org.apache.hadoop.ipc.StandbyException;
@InterfaceAudience.Private
public interface HAContext
