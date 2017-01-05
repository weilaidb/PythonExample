package org.apache.hadoop.tools.mapred.lib;
import org.apache.commons.logging.LogFactory;
import org.apache.commons.logging.Log;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.mapreduce.TaskAttemptContext;
import org.apache.hadoop.tools.DistCpConstants;
import java.io.IOException;
class DynamicInputChunkContext<K, V>
