package org.apache.hadoop.mapreduce.lib.partition;
import java.io.UnsupportedEncodingException;
import java.util.List;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configurable;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.mapreduce.JobContext;
import org.apache.hadoop.mapreduce.MRJobConfig;
import org.apache.hadoop.mapreduce.Partitioner;
import org.apache.hadoop.mapreduce.lib.partition.KeyFieldHelper.KeyDescription;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class KeyFieldBasedPartitioner<K2, V2> extends Partitioner<K2, V2>
implements Configurable
