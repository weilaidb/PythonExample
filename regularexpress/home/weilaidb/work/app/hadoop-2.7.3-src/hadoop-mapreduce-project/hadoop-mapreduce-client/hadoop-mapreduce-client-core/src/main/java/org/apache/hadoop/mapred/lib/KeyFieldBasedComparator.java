package org.apache.hadoop.mapred.lib;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.JobConfigurable;
import org.apache.hadoop.mapreduce.JobContext;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class KeyFieldBasedComparator<K, V> extends
org.apache.hadoop.mapreduce.lib.partition.KeyFieldBasedComparator<K, V>
implements JobConfigurable
