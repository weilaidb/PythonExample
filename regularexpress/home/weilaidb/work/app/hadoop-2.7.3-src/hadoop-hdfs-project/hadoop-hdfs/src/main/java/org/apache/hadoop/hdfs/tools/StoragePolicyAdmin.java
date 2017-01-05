package org.apache.hadoop.hdfs.tools;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.conf.Configured;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.hdfs.DistributedFileSystem;
import org.apache.hadoop.hdfs.protocol.BlockStoragePolicy;
import org.apache.hadoop.hdfs.protocol.HdfsFileStatus;
import org.apache.hadoop.hdfs.server.blockmanagement.BlockStoragePolicySuite;
import org.apache.hadoop.tools.TableListing;
import org.apache.hadoop.util.StringUtils;
import org.apache.hadoop.util.Tool;
import java.io.IOException;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;
public class StoragePolicyAdmin extends Configured implements Tool
