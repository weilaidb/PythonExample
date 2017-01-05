package org.apache.hadoop.mapreduce;
import java.io.IOException;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.mapreduce.lib.input.FileInputFormat;
@InterfaceAudience.Public
@InterfaceStability.Stable
public abstract class InputFormat<K, V>
