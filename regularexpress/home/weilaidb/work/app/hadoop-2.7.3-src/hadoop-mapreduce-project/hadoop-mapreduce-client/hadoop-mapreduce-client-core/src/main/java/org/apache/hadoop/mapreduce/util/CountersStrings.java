package org.apache.hadoop.mapreduce.util;
import java.text.ParseException;
import java.util.List;
import com.google.common.collect.Lists;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.io.IntWritable;
import org.apache.hadoop.mapreduce.counters.AbstractCounters;
import org.apache.hadoop.mapreduce.Counter;
import org.apache.hadoop.mapreduce.counters.CounterGroupBase;
import org.apache.hadoop.util.StringInterner;
import org.apache.hadoop.util.StringUtils;
@InterfaceAudience.Private
public class CountersStrings
