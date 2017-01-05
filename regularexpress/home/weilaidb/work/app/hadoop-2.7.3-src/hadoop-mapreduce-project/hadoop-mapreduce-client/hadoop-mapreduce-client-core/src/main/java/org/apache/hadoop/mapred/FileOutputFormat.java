package org.apache.hadoop.mapred;
import java.io.IOException;
import java.text.NumberFormat;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.compress.CompressionCodec;
import org.apache.hadoop.mapreduce.security.TokenCache;
import org.apache.hadoop.util.Progressable;
@InterfaceAudience.Public
@InterfaceStability.Stable
public abstract class FileOutputFormat<K, V> implements OutputFormat<K, V>
