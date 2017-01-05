package org.apache.hadoop.mapred.join;
import java.util.ArrayList;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.Writable;
@InterfaceAudience.Public
@InterfaceStability.Stable
public class ArrayListBackedIterator<X extends Writable> extends
org.apache.hadoop.mapreduce.lib.join.ArrayListBackedIterator<X>
implements ResetableIterator<X>
