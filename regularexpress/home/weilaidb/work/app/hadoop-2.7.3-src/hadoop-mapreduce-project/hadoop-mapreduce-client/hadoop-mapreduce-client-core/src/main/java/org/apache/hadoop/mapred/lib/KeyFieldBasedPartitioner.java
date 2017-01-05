package org.apache.hadoop.mapred.lib;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.Partitioner;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class KeyFieldBasedPartitioner<K2, V2> extends
org.apache.hadoop.mapreduce.lib.partition.KeyFieldBasedPartitioner<K2, V2>
implements Partitioner<K2, V2>
