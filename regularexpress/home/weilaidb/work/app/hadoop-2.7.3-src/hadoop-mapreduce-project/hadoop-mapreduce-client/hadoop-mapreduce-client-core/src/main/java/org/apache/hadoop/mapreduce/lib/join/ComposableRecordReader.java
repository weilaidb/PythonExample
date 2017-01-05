package org.apache.hadoop.mapreduce.lib.join;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableComparable;
import org.apache.hadoop.mapreduce.RecordReader;
@InterfaceAudience.Public
@InterfaceStability.Stable
public abstract class ComposableRecordReader<K extends WritableComparable<?>,
V extends Writable>
extends RecordReader<K,V>
implements Comparable<ComposableRecordReader<K,?>>
