package org.apache.hadoop.hdfs.tools.snapshot;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.conf.Configured;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.hdfs.DistributedFileSystem;
import org.apache.hadoop.hdfs.protocol.SnapshottableDirectoryStatus;
import org.apache.hadoop.util.Tool;
import org.apache.hadoop.util.ToolRunner;
@InterfaceAudience.Private
public class LsSnapshottableDir extends Configured implements Tool
