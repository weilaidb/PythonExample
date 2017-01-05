package org.apache.hadoop.mapreduce.lib.map;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.mapreduce.Mapper;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class InverseMapper<K, V> extends Mapper<K,V,V,K>
