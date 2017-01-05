package org.apache.hadoop.mapreduce;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.mapreduce.counters.Limits;
import org.apache.hadoop.mapreduce.counters.GenericCounter;
import org.apache.hadoop.mapreduce.counters.AbstractCounterGroup;
import org.apache.hadoop.mapreduce.counters.CounterGroupBase;
import org.apache.hadoop.mapreduce.counters.FileSystemCounterGroup;
import org.apache.hadoop.mapreduce.counters.AbstractCounters;
import org.apache.hadoop.mapreduce.counters.CounterGroupFactory;
import org.apache.hadoop.mapreduce.counters.FrameworkCounterGroup;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class Counters extends AbstractCounters<Counter, CounterGroup>
