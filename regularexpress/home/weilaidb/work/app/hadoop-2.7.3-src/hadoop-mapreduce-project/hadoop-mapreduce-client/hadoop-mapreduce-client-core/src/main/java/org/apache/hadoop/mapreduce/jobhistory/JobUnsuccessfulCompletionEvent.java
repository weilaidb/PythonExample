package org.apache.hadoop.mapreduce.jobhistory;
import com.google.common.base.Joiner;
import org.apache.avro.util.Utf8;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.mapreduce.JobID;
import java.util.Collections;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class JobUnsuccessfulCompletionEvent implements HistoryEvent
