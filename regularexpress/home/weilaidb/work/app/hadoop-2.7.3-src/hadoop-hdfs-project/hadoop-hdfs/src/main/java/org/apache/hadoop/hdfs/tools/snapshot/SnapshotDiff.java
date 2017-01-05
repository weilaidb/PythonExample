package org.apache.hadoop.hdfs.tools.snapshot;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configured;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.hdfs.DistributedFileSystem;
import org.apache.hadoop.hdfs.protocol.HdfsConstants;
import org.apache.hadoop.hdfs.protocol.SnapshotDiffReport;
import org.apache.hadoop.util.Tool;
import org.apache.hadoop.util.ToolRunner;
@InterfaceAudience.Private
public class SnapshotDiff extends Configured implements Tool
