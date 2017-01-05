package org.apache.hadoop.mapreduce;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import java.text.NumberFormat;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.Text;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class JobID extends org.apache.hadoop.mapred.ID
implements Comparable<ID>
