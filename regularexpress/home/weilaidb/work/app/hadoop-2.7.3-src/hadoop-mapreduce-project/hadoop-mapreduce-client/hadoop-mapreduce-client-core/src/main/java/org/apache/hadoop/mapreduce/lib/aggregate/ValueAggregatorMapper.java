package org.apache.hadoop.mapreduce.lib.aggregate;
import java.io.IOException;
import java.util.Iterator;
import java.util.Map.Entry;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableComparable;
import org.apache.hadoop.mapreduce.Mapper;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class ValueAggregatorMapper<K1 extends WritableComparable<?>,
V1 extends Writable>
extends Mapper<K1, V1, Text, Text>
