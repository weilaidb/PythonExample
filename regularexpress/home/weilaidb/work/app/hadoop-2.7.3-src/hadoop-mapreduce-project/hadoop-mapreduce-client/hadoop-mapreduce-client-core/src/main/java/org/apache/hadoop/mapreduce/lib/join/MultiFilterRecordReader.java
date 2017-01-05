package org.apache.hadoop.mapreduce.lib.join;
import java.io.IOException;
import java.util.PriorityQueue;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableComparable;
import org.apache.hadoop.io.WritableComparator;
import org.apache.hadoop.mapreduce.InputSplit;
import org.apache.hadoop.mapreduce.TaskAttemptContext;
import org.apache.hadoop.util.ReflectionUtils;
@InterfaceAudience.Public
@InterfaceStability.Stable
public abstract class MultiFilterRecordReader<K extends WritableComparable<?>,
V extends Writable>
extends CompositeRecordReader<K,V,V>
