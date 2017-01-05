package org.apache.hadoop.hdfs.protocol;
import java.net.URI;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.FileEncryptionInfo;
import org.apache.hadoop.fs.LocatedFileStatus;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.hdfs.DFSUtil;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class HdfsLocatedFileStatus extends HdfsFileStatus
