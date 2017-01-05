package org.apache.hadoop.hdfs.server.namenode;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.hdfs.protocol.Block;
import org.apache.hadoop.hdfs.server.blockmanagement.BlockInfoContiguousUnderConstruction;
import org.apache.hadoop.hdfs.server.namenode.NameNode.OperationCategory;
import org.apache.hadoop.hdfs.util.RwLock;
import org.apache.hadoop.ipc.StandbyException;
import org.apache.hadoop.security.AccessControlException;
@InterfaceAudience.Private
public interface Namesystem extends RwLock, SafeMode
