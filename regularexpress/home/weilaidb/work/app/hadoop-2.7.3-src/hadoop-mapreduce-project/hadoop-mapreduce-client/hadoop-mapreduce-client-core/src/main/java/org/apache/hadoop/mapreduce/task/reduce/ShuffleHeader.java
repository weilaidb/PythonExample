package org.apache.hadoop.mapreduce.task.reduce;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableUtils;
@InterfaceAudience.Private
@InterfaceStability.Stable
public class ShuffleHeader implements Writable
