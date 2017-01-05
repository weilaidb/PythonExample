package org.apache.hadoop.hdfs.server.namenode;
import java.util.Iterator;
import java.util.List;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.fs.permission.PermissionStatus;
import org.apache.hadoop.hdfs.server.blockmanagement.BlockStoragePolicySuite;
import org.apache.hadoop.util.GSet;
import org.apache.hadoop.util.LightWeightGSet;
import com.google.common.base.Preconditions;
public class INodeMap
