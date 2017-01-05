package org.apache.hadoop.mapred.lib;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.mapred.InputSplit;
import org.apache.hadoop.mapred.JobConf;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class CombineFileSplit extends
org.apache.hadoop.mapreduce.lib.input.CombineFileSplit
implements InputSplit
