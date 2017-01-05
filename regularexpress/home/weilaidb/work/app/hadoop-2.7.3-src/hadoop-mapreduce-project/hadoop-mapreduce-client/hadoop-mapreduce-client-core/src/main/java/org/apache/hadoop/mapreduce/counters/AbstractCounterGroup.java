package org.apache.hadoop.mapreduce.counters;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import java.util.Iterator;
import java.util.concurrent.ConcurrentMap;
import java.util.concurrent.ConcurrentSkipListMap;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.io.WritableUtils;
import org.apache.hadoop.mapreduce.Counter;
import org.apache.hadoop.mapreduce.util.ResourceBundles;
import org.apache.hadoop.util.StringInterner;
import com.google.common.collect.Iterators;
@InterfaceAudience.Private
public abstract class AbstractCounterGroup<T extends Counter>
implements CounterGroupBase<T>
