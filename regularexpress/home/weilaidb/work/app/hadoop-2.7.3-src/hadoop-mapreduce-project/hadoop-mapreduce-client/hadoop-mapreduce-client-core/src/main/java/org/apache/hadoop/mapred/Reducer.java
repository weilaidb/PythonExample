package org.apache.hadoop.mapred;
import java.io.IOException;
import java.util.Iterator;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.io.Closeable;
@InterfaceAudience.Public
@InterfaceStability.Stable
public interface Reducer<K2, V2, K3, V3> extends JobConfigurable, Closeable
