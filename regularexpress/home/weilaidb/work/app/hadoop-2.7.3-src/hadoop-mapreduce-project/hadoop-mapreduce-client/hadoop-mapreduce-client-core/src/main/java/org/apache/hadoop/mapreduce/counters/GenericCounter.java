package org.apache.hadoop.mapreduce.counters;
import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.io.WritableUtils;
import org.apache.hadoop.mapreduce.Counter;
import org.apache.hadoop.util.StringInterner;
@InterfaceAudience.Private
public class GenericCounter extends AbstractCounter
