package org.apache.hadoop.mapred.lib;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Random;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.mapred.InputFormat;
import org.apache.hadoop.mapred.InputSplit;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.RecordReader;
import org.apache.hadoop.mapred.Reporter;
import org.apache.hadoop.mapreduce.Job;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class InputSampler<K,V> extends
org.apache.hadoop.mapreduce.lib.partition.InputSampler<K, V>
