package org.apache.hadoop.mapreduce.lib.aggregate;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.Set;
import java.util.TreeMap;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class UniqValueCount implements ValueAggregator<Object>
