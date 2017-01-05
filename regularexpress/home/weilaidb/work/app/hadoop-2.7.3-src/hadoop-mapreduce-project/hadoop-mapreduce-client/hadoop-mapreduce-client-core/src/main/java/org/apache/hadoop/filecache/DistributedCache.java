package org.apache.hadoop.filecache;
import java.io.File;
import java.io.IOException;
import java.net.URI;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.mapreduce.MRJobConfig;
@SuppressWarnings("deprecation")
@InterfaceAudience.Public
@InterfaceStability.Stable
@Deprecated
public class DistributedCache extends
org.apache.hadoop.mapreduce.filecache.DistributedCache
