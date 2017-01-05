package org.apache.hadoop.mapreduce;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableUtils;
import org.apache.hadoop.mapred.TIPStatus;
import org.apache.hadoop.mapred.TaskID;
import org.apache.hadoop.util.StringInterner;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class TaskReport implements Writable
