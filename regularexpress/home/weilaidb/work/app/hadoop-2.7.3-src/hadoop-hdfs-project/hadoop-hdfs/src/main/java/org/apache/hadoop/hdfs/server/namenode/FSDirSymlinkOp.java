package org.apache.hadoop.hdfs.server.namenode;
import org.apache.hadoop.fs.InvalidPathException;
import org.apache.hadoop.fs.UnresolvedLinkException;
import org.apache.hadoop.fs.permission.FsAction;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.fs.permission.PermissionStatus;
import org.apache.hadoop.hdfs.DFSUtil;
import org.apache.hadoop.hdfs.protocol.HdfsFileStatus;
import org.apache.hadoop.hdfs.protocol.QuotaExceededException;
import java.io.IOException;
import java.util.Map;
import static org.apache.hadoop.util.Time.now;
class FSDirSymlinkOp
