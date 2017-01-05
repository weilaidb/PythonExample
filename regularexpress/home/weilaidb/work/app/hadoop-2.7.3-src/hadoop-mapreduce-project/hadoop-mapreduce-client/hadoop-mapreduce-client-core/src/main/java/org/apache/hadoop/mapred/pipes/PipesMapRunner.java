package org.apache.hadoop.mapred.pipes;
import java.io.IOException;
import org.apache.hadoop.io.FloatWritable;
import org.apache.hadoop.io.NullWritable;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableComparable;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.MapRunner;
import org.apache.hadoop.mapred.OutputCollector;
import org.apache.hadoop.mapred.RecordReader;
import org.apache.hadoop.mapred.Reporter;
import org.apache.hadoop.mapred.SkipBadRecords;
import org.apache.hadoop.mapreduce.MRJobConfig;
class PipesMapRunner<K1 extends WritableComparable, V1 extends Writable,
K2 extends WritableComparable, V2 extends Writable>
extends MapRunner<K1, V1, K2, V2>
