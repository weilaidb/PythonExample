package org.apache.hadoop.mapreduce.task.reduce;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.mapred.TaskCompletionEvent;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public interface ShuffleScheduler<K,V>
