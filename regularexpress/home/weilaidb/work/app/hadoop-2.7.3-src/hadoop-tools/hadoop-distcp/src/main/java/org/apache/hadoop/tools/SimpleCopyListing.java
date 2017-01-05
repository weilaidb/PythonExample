package org.apache.hadoop.tools;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.SequenceFile;
import org.apache.hadoop.io.IOUtils;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.tools.DistCpOptions.FileAttribute;
import org.apache.hadoop.tools.util.DistCpUtils;
import org.apache.hadoop.mapreduce.security.TokenCache;
import org.apache.hadoop.security.Credentials;
import com.google.common.annotations.VisibleForTesting;
import java.io.*;
import java.util.Stack;
import static org.apache.hadoop.tools.DistCpConstants
.HDFS_RESERVED_RAW_DIRECTORY_NAME;
public class SimpleCopyListing extends CopyListing
