package org.apache.hadoop.io;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
@InterfaceAudience.Public
@InterfaceStability.Stable
public interface WritableComparable<T> extends Writable, Comparable<T>
