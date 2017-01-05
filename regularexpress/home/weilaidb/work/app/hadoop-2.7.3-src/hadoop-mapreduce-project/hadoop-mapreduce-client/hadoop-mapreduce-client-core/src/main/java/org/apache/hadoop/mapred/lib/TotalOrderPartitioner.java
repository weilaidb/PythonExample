package org.apache.hadoop.mapred.lib;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.WritableComparable;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.Partitioner;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class TotalOrderPartitioner<K extends WritableComparable<?>,V>
extends org.apache.hadoop.mapreduce.lib.partition.TotalOrderPartitioner<K, V>
implements Partitioner<K,V>
