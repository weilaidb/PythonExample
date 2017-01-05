package org.apache.hadoop.mapred.gridmix;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import org.apache.hadoop.io.WritableUtils;
import org.apache.hadoop.mapreduce.lib.input.CombineFileSplit;
import org.apache.hadoop.tools.rumen.ResourceUsageMetrics;
class LoadSplit extends CombineFileSplit
