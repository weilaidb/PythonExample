package org.apache.hadoop.mapreduce.lib.join;
import java.io.DataOutput;
import java.io.DataInput;
import java.io.IOException;
import java.util.BitSet;
import java.util.Iterator;
import java.util.NoSuchElementException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.NullWritable;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.io.Writable;
import org.apache.hadoop.io.WritableUtils;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class TupleWritable implements Writable, Iterable<Writable>
