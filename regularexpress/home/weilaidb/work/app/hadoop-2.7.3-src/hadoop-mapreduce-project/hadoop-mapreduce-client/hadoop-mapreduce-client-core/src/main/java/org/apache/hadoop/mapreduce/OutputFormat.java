package org.apache.hadoop.mapreduce;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.FileSystem;
@InterfaceAudience.Public
@InterfaceStability.Stable
public abstract class OutputFormat<K, V>
