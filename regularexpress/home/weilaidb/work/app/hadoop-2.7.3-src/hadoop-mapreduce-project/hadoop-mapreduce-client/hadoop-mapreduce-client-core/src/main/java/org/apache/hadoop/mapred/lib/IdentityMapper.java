package org.apache.hadoop.mapred.lib;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.mapred.Mapper;
import org.apache.hadoop.mapred.OutputCollector;
import org.apache.hadoop.mapred.Reporter;
import org.apache.hadoop.mapred.MapReduceBase;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class IdentityMapper<K, V>
extends MapReduceBase implements Mapper<K, V, K, V>
