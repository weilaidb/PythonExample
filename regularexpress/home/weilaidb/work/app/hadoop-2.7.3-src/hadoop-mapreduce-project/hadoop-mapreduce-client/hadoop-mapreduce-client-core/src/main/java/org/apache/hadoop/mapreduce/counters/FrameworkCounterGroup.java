package org.apache.hadoop.mapreduce.counters;
import static com.google.common.base.Preconditions.checkNotNull;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import java.util.Arrays;
import java.util.Iterator;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.io.WritableUtils;
import org.apache.hadoop.mapreduce.Counter;
import org.apache.hadoop.mapreduce.util.ResourceBundles;
import com.google.common.collect.AbstractIterator;
import com.google.common.collect.Iterators;
@InterfaceAudience.Private
public abstract class FrameworkCounterGroup<T extends Enum<T>,
C extends Counter> implements CounterGroupBase<C>
