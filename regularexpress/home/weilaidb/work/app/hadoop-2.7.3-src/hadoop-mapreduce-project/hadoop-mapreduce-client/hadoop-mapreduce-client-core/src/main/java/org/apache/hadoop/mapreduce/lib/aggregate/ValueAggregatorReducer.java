package org.apache.hadoop.mapreduce.lib.aggregate;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableComparable;
import org.apache.hadoop.mapreduce.Reducer;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class ValueAggregatorReducer<K1 extends WritableComparable<?>,
V1 extends Writable>
extends Reducer<Text, Text, Text, Text>
