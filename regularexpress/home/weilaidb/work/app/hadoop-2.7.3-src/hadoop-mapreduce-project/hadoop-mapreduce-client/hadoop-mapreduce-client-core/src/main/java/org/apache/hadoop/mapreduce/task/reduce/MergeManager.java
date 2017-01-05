package org.apache.hadoop.mapreduce.task.reduce;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.LocalDirAllocator;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.compress.CompressionCodec;
import org.apache.hadoop.mapred.Counters;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.MapOutputFile;
import org.apache.hadoop.mapred.RawKeyValueIterator;
import org.apache.hadoop.mapred.Reducer;
import org.apache.hadoop.mapred.Reporter;
import org.apache.hadoop.mapred.Task.CombineOutputCollector;
import org.apache.hadoop.mapreduce.TaskAttemptID;
import org.apache.hadoop.util.Progress;
import java.io.IOException;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public interface MergeManager<K, V>
