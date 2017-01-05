package org.apache.hadoop.mapred;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.mapred.Task.TaskReporter;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Unstable
public interface MapOutputCollector<K, V>
