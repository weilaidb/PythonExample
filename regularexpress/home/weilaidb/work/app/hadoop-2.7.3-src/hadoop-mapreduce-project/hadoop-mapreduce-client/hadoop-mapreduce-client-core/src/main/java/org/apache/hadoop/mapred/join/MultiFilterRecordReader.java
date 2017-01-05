package org.apache.hadoop.mapred.join;
import java.io.IOException;
import java.util.PriorityQueue;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableComparable;
import org.apache.hadoop.io.WritableComparator;
import org.apache.hadoop.io.WritableUtils;
import org.apache.hadoop.util.ReflectionUtils;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.RecordReader;
@InterfaceAudience.Public
@InterfaceStability.Stable
public abstract class MultiFilterRecordReader<K extends WritableComparable,
V extends Writable>
extends CompositeRecordReader<K,V,V>
implements ComposableRecordReader<K,V>
