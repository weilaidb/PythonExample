package org.apache.hadoop.mapreduce.jobhistory;
import org.apache.avro.util.Utf8;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.mapreduce.Counters;
import org.apache.hadoop.mapreduce.JobID;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class JobFinishedEvent  implements HistoryEvent
