package org.apache.hadoop.hdfs.server.namenode;
import java.io.File;
import java.io.IOException;
import java.util.List;
import org.apache.hadoop.hdfs.protocol.HdfsConstants;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.hdfs.server.common.Storage.StorageDirectory;
@InterfaceAudience.Private
@InterfaceStability.Unstable
abstract class FSImageStorageInspector
