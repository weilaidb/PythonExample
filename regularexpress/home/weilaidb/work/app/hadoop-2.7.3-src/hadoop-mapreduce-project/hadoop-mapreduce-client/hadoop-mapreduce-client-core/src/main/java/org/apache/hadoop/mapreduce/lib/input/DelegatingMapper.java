package org.apache.hadoop.mapreduce.lib.input;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.mapreduce.Mapper;
import org.apache.hadoop.util.ReflectionUtils;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class DelegatingMapper<K1, V1, K2, V2> extends Mapper<K1, V1, K2, V2>
