package org.apache.hadoop.mapred.pipes;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableComparable;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.Partitioner;
import org.apache.hadoop.util.ReflectionUtils;
class PipesPartitioner<K extends WritableComparable,
V extends Writable>
implements Partitioner<K, V>
