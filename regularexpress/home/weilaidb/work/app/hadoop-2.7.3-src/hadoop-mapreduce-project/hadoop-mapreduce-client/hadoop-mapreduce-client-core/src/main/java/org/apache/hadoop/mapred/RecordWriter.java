package org.apache.hadoop.mapred;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.FileSystem;
@InterfaceAudience.Public
@InterfaceStability.Stable
public interface RecordWriter<K, V>
