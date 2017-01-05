package org.apache.hadoop.mapreduce.counters;
import static org.apache.hadoop.mapreduce.counters.CounterGroupFactory.getFrameworkGroupId;
import static org.apache.hadoop.mapreduce.counters.CounterGroupFactory.isFrameworkGroup;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Map;
import java.util.concurrent.ConcurrentSkipListMap;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableUtils;
import org.apache.hadoop.mapreduce.Counter;
import org.apache.hadoop.mapreduce.FileSystemCounter;
import org.apache.hadoop.mapreduce.JobCounter;
import org.apache.hadoop.mapreduce.TaskCounter;
import org.apache.hadoop.util.StringInterner;
import com.google.common.collect.Iterables;
import com.google.common.collect.Iterators;
import com.google.common.collect.Maps;
@InterfaceAudience.Public
@InterfaceStability.Stable
public abstract class AbstractCounters<C extends Counter,
G extends CounterGroupBase<C>>
implements Writable, Iterable<G>
