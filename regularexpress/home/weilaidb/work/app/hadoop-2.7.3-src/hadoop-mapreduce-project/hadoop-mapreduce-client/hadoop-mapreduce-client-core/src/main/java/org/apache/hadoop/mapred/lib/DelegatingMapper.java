package org.apache.hadoop.mapred.lib;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.Mapper;
import org.apache.hadoop.mapred.OutputCollector;
import org.apache.hadoop.mapred.Reporter;
import org.apache.hadoop.util.ReflectionUtils;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class DelegatingMapper<K1, V1, K2, V2> implements Mapper<K1, V1, K2, V2>
