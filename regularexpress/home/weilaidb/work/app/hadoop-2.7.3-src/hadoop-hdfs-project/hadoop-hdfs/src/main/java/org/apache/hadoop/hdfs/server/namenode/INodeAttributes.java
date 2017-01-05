package org.apache.hadoop.hdfs.server.namenode;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.fs.permission.PermissionStatus;
import org.apache.hadoop.hdfs.server.namenode.INodeWithAdditionalFields.PermissionStatusFormat;
import org.apache.hadoop.hdfs.server.namenode.XAttrFeature;
@InterfaceAudience.Private
public interface INodeAttributes
