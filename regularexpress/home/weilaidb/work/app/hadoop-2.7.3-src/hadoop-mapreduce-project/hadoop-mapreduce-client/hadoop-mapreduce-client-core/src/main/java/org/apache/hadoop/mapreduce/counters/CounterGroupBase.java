package org.apache.hadoop.mapreduce.counters;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.mapreduce.Counter;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public interface CounterGroupBase<T extends Counter>
extends Writable, Iterable<T>
