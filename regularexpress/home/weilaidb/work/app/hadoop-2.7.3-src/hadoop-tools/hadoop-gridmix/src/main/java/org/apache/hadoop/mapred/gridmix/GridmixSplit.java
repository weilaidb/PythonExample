package org.apache.hadoop.mapred.gridmix;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import org.apache.hadoop.io.WritableUtils;
import org.apache.hadoop.mapreduce.lib.input.CombineFileSplit;
class GridmixSplit extends CombineFileSplit
