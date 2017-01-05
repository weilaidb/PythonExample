package org.apache.hadoop.hdfs.server.namenode;
import java.io.PrintStream;
import java.io.PrintWriter;
import java.io.StringWriter;
import java.util.List;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.fs.ContentSummary;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.fs.permission.PermissionStatus;
import org.apache.hadoop.hdfs.protocol.HdfsConstants;
import org.apache.hadoop.hdfs.server.blockmanagement.BlockStoragePolicySuite;
import org.apache.hadoop.hdfs.DFSUtil;
import org.apache.hadoop.hdfs.protocol.Block;
import org.apache.hadoop.hdfs.protocol.QuotaExceededException;
import org.apache.hadoop.hdfs.server.namenode.INodeReference.DstReference;
import org.apache.hadoop.hdfs.server.namenode.INodeReference.WithName;
import org.apache.hadoop.hdfs.server.namenode.snapshot.Snapshot;
import org.apache.hadoop.hdfs.util.Diff;
import org.apache.hadoop.util.ChunkedArrayList;
import org.apache.hadoop.util.StringUtils;
import com.google.common.annotations.VisibleForTesting;
import com.google.common.base.Preconditions;
@InterfaceAudience.Private
public abstract class INode implements INodeAttributes, Diff.Element<byte[]>
