package org.apache.hadoop.hdfs.server.namenode;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.fs.permission.PermissionStatus;
import org.apache.hadoop.fs.StorageType;
import org.apache.hadoop.hdfs.util.EnumCounters;
import com.google.common.base.Preconditions;
@InterfaceAudience.Private
public interface INodeDirectoryAttributes extends INodeAttributes
