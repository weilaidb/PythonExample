package org.apache.hadoop.mapred.pipes;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableComparable;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapred.OutputCollector;
import org.apache.hadoop.mapred.Reducer;
import org.apache.hadoop.mapred.Reporter;
import org.apache.hadoop.mapred.SkipBadRecords;
import org.apache.hadoop.mapreduce.MRJobConfig;
import java.io.IOException;
import java.util.Iterator;
class PipesReducer<K2 extends WritableComparable, V2 extends Writable,
K3 extends WritableComparable, V3 extends Writable>
implements Reducer<K2, V2, K3, V3>
