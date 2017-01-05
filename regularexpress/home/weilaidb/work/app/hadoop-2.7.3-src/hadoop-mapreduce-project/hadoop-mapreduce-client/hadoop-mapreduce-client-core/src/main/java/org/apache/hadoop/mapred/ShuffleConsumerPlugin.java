package org.apache.hadoop.mapred;
import java.io.IOException;
import java.util.Map;
import org.apache.hadoop.mapred.Task.CombineOutputCollector;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.LocalDirAllocator;
import org.apache.hadoop.io.compress.CompressionCodec;
import org.apache.hadoop.util.Progress;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
@InterfaceAudience.LimitedPrivate("mapreduce")
@InterfaceStability.Unstable
public interface ShuffleConsumerPlugin<K, V>
