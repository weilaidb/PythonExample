package org.apache.hadoop.hdfs.server.protocol;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.hdfs.protocol.DatanodeID;
import org.apache.hadoop.hdfs.security.token.block.ExportedBlockKeys;
import org.apache.hadoop.hdfs.server.common.Storage;
import org.apache.hadoop.hdfs.server.common.StorageInfo;
import com.google.common.annotations.VisibleForTesting;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class DatanodeRegistration extends DatanodeID
implements NodeRegistration
