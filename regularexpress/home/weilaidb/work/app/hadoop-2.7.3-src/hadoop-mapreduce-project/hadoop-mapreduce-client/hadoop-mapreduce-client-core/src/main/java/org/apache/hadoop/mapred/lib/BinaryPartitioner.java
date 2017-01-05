package org.apache.hadoop.mapred.lib;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.BinaryComparable;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.Partitioner;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class BinaryPartitioner<V>
extends org.apache.hadoop.mapreduce.lib.partition.BinaryPartitioner<V>
implements Partitioner<BinaryComparable, V>
