package org.apache.hadoop.mapred.lib;
import org.apache.hadoop.util.ReflectionUtils;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.mapred.MapRunnable;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.Mapper;
import org.apache.hadoop.mapred.RecordReader;
import org.apache.hadoop.mapred.OutputCollector;
import org.apache.hadoop.mapred.Reporter;
import org.apache.hadoop.mapred.SkipBadRecords;
import org.apache.hadoop.mapreduce.lib.map.MultithreadedMapper;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import java.io.IOException;
import java.util.concurrent.*;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class MultithreadedMapRunner<K1, V1, K2, V2>
implements MapRunnable<K1, V1, K2, V2>
