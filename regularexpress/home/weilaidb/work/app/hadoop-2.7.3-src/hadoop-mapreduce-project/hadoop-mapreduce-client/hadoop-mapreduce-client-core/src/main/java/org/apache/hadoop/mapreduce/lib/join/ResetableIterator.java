package org.apache.hadoop.mapreduce.lib.join;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.io.Writable;
@InterfaceAudience.Public
@InterfaceStability.Stable
public interface ResetableIterator<T extends Writable>
