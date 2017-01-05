package org.apache.hadoop.mapreduce;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.mapreduce.counters.CounterGroupBase;
@InterfaceAudience.Public
@InterfaceStability.Stable
public interface CounterGroup extends CounterGroupBase<Counter>
