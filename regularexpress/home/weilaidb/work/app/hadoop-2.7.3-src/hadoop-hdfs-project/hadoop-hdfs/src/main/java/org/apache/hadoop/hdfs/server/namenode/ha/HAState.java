package org.apache.hadoop.hdfs.server.namenode.ha;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.ha.HAServiceProtocol.HAServiceState;
import org.apache.hadoop.ha.ServiceFailedException;
import org.apache.hadoop.hdfs.server.namenode.NameNode.OperationCategory;
import org.apache.hadoop.ipc.StandbyException;
import org.apache.hadoop.util.Time;
@InterfaceAudience.Private
abstract public class HAState
