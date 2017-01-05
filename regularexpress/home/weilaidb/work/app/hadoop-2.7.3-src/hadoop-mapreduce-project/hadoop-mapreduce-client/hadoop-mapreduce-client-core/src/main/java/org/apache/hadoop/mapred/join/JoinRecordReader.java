package org.apache.hadoop.mapred.join;
import java.io.IOException;
import java.util.PriorityQueue;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableComparable;
import org.apache.hadoop.io.WritableComparator;
import org.apache.hadoop.io.WritableUtils;
import org.apache.hadoop.mapred.JobConf;
@InterfaceAudience.Public
@InterfaceStability.Stable
public abstract class JoinRecordReader<K extends WritableComparable>
extends CompositeRecordReader<K,Writable,TupleWritable>
implements ComposableRecordReader<K,TupleWritable>
