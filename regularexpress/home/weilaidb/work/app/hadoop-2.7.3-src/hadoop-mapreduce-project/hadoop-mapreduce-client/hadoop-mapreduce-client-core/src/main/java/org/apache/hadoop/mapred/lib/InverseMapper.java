package org.apache.hadoop.mapred.lib;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.mapred.MapReduceBase;
import org.apache.hadoop.mapred.Mapper;
import org.apache.hadoop.mapred.OutputCollector;
import org.apache.hadoop.mapred.Reporter;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class InverseMapper<K, V>
extends MapReduceBase implements Mapper<K, V, V, K>
