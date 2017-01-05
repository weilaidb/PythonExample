package org.apache.hadoop.mapreduce.jobhistory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.mapred.TaskStatus;
import org.apache.hadoop.mapreduce.Counters;
import org.apache.hadoop.mapreduce.TaskAttemptID;
import org.apache.hadoop.mapreduce.TaskID;
import org.apache.hadoop.mapreduce.TaskType;
import org.apache.hadoop.mapred.ProgressSplitsBlock;
import org.apache.avro.util.Utf8;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class TaskAttemptUnsuccessfulCompletionEvent implements HistoryEvent
