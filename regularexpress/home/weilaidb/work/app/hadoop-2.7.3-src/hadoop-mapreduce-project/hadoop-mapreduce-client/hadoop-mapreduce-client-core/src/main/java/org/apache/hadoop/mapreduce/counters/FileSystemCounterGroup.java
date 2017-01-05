package org.apache.hadoop.mapreduce.counters;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import java.util.Arrays;
import java.util.concurrent.ConcurrentMap;
import java.util.concurrent.ConcurrentSkipListMap;
import java.util.Iterator;
import java.util.Map;
import com.google.common.base.Joiner;
import static com.google.common.base.Preconditions.*;
import com.google.common.collect.AbstractIterator;
import com.google.common.collect.Iterators;
import com.google.common.collect.Maps;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.io.WritableUtils;
import org.apache.hadoop.mapreduce.Counter;
import org.apache.hadoop.mapreduce.FileSystemCounter;
import org.apache.hadoop.mapreduce.util.ResourceBundles;
import org.apache.hadoop.util.StringUtils;
@InterfaceAudience.Private
public abstract class FileSystemCounterGroup<C extends Counter>
implements CounterGroupBase<C>
