package org.apache.hadoop.mapred.join;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableComparable;
import org.apache.hadoop.mapred.RecordReader;
@InterfaceAudience.Public
@InterfaceStability.Stable
public interface ComposableRecordReader<K extends WritableComparable,
V extends Writable>
extends RecordReader<K,V>, Comparable<ComposableRecordReader<K,?>>
