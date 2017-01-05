package org.apache.hadoop.mapreduce.counters;
import java.util.List;
import java.util.Map;
import com.google.common.collect.Lists;
import com.google.common.collect.Maps;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.mapreduce.Counter;
import org.apache.hadoop.mapreduce.FileSystemCounter;
import org.apache.hadoop.mapreduce.JobCounter;
import org.apache.hadoop.mapreduce.TaskCounter;
import org.apache.hadoop.mapreduce.util.ResourceBundles;
@InterfaceAudience.Private
public abstract class CounterGroupFactory<C extends Counter,
G extends CounterGroupBase<C>>
