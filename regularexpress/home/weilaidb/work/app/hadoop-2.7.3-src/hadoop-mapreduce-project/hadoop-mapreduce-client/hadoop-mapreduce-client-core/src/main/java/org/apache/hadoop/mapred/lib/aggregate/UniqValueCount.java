package org.apache.hadoop.mapred.lib.aggregate;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class UniqValueCount
extends org.apache.hadoop.mapreduce.lib.aggregate.UniqValueCount
implements ValueAggregator<Object>