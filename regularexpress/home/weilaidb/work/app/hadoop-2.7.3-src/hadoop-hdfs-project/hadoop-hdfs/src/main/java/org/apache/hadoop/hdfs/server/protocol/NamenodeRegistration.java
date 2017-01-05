package org.apache.hadoop.hdfs.server.protocol;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.hdfs.server.common.Storage;
import org.apache.hadoop.hdfs.server.common.StorageInfo;
import org.apache.hadoop.hdfs.server.common.HdfsServerConstants.NamenodeRole;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class NamenodeRegistration extends StorageInfo
implements NodeRegistration
