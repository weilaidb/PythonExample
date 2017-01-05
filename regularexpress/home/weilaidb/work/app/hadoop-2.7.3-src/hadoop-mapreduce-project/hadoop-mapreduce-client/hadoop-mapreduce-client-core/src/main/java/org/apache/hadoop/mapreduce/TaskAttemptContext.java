package org.apache.hadoop.mapreduce;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.util.Progressable;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public interface TaskAttemptContext extends JobContext, Progressable
