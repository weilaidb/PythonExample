package org.apache.hadoop.mapreduce.lib.reduce;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.LongWritable;
import org.apache.hadoop.mapreduce.Reducer;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class LongSumReducer<KEY> extends Reducer<KEY, LongWritable,
KEY,LongWritable>
