package org.apache.hadoop.mapred.join;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import java.util.HashSet;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.io.WritableUtils;
import org.apache.hadoop.mapred.InputSplit;
import org.apache.hadoop.util.ReflectionUtils;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class CompositeInputSplit implements InputSplit
