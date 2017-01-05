package org.apache.hadoop.mapred;
import static org.apache.hadoop.mapreduce.util.CountersStrings.parseEscapedCompactString;
import static org.apache.hadoop.mapreduce.util.CountersStrings.toEscapedCompactString;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import java.text.ParseException;
import java.util.Collection;
import java.util.HashMap;
import java.util.Iterator;
import org.apache.commons.collections.IteratorUtils;
import org.apache.commons.logging.Log;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.mapreduce.FileSystemCounter;
import org.apache.hadoop.mapreduce.counters.AbstractCounterGroup;
import org.apache.hadoop.mapreduce.counters.AbstractCounters;
import org.apache.hadoop.mapreduce.counters.CounterGroupBase;
import org.apache.hadoop.mapreduce.counters.CounterGroupFactory;
import org.apache.hadoop.mapreduce.counters.FileSystemCounterGroup;
import org.apache.hadoop.mapreduce.counters.FrameworkCounterGroup;
import org.apache.hadoop.mapreduce.counters.GenericCounter;
import org.apache.hadoop.mapreduce.counters.Limits;
import org.apache.hadoop.mapreduce.lib.input.FileInputFormatCounter;
import org.apache.hadoop.mapreduce.lib.output.FileOutputFormatCounter;
import com.google.common.collect.Iterators;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class Counters
extends AbstractCounters<Counters.Counter, Counters.Group>
