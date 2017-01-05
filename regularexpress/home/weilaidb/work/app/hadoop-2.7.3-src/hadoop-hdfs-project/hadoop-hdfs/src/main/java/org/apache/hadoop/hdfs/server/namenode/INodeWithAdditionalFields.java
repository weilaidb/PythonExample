package org.apache.hadoop.hdfs.server.namenode;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.fs.permission.PermissionStatus;
import org.apache.hadoop.hdfs.server.namenode.snapshot.Snapshot;
import org.apache.hadoop.hdfs.util.LongBitFormat;
import org.apache.hadoop.util.LightWeightGSet.LinkedElement;
import com.google.common.base.Preconditions;
@InterfaceAudience.Private
public abstract class INodeWithAdditionalFields extends INode
implements LinkedElement
