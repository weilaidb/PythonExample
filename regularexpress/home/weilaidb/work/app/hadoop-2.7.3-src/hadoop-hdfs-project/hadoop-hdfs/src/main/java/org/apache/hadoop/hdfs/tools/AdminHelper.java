package org.apache.hadoop.hdfs.tools;
import com.google.common.base.Preconditions;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.hdfs.DFSUtil;
import org.apache.hadoop.hdfs.DistributedFileSystem;
import org.apache.hadoop.hdfs.protocol.CachePoolInfo;
import org.apache.hadoop.tools.TableListing;
import java.io.IOException;
import java.util.List;
public class AdminHelper
