package org.apache.hadoop.mapred;
import java.io.IOException;
import java.io.DataInput;
import java.io.DataOutput;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.classification.InterfaceStability.Evolving;
import org.apache.hadoop.fs.Path;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class FileSplit extends org.apache.hadoop.mapreduce.InputSplit
implements InputSplitWithLocationInfo
