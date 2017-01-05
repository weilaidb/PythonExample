package org.apache.hadoop.hdfs.server.namenode;
import java.io.PrintWriter;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.fs.permission.PermissionStatus;
import org.apache.hadoop.hdfs.DFSUtil;
import org.apache.hadoop.hdfs.server.blockmanagement.BlockStoragePolicySuite;
import org.apache.hadoop.hdfs.server.namenode.snapshot.Snapshot;
@InterfaceAudience.Private
public class INodeSymlink extends INodeWithAdditionalFields
