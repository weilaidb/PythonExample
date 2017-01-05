package org.apache.hadoop.mapred.join;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.Writable;
@InterfaceAudience.Public
@InterfaceStability.Stable
public interface ResetableIterator<T extends Writable>
extends org.apache.hadoop.mapreduce.lib.join.ResetableIterator<T>
