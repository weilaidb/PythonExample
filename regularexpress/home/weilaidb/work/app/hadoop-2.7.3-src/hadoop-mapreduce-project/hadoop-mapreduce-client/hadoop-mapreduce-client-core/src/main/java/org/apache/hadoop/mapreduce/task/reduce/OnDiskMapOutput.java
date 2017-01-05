package org.apache.hadoop.mapreduce.task.reduce;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.IOUtils;
import org.apache.hadoop.mapred.IFileInputStream;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.Reporter;
import org.apache.hadoop.mapred.MapOutputFile;
import org.apache.hadoop.mapreduce.TaskAttemptID;
import org.apache.hadoop.mapreduce.CryptoUtils;
import org.apache.hadoop.mapreduce.task.reduce.MergeManagerImpl.CompressAwarePath;
import com.google.common.annotations.VisibleForTesting;
@InterfaceAudience.Private
@InterfaceStability.Unstable
class OnDiskMapOutput<K, V> extends MapOutput<K, V>
