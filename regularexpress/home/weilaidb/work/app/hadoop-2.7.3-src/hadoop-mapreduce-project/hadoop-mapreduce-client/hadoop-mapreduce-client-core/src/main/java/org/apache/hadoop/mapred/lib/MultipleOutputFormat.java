package org.apache.hadoop.mapred.lib;
import java.io.IOException;
import java.util.Iterator;
import java.util.TreeMap;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.FileOutputFormat;
import org.apache.hadoop.mapred.RecordWriter;
import org.apache.hadoop.mapred.Reporter;
import org.apache.hadoop.mapreduce.JobContext;
import org.apache.hadoop.mapreduce.MRJobConfig;
import org.apache.hadoop.util.Progressable;
@InterfaceAudience.Public
@InterfaceStability.Stable
public abstract class MultipleOutputFormat<K, V>
extends FileOutputFormat<K, V>
