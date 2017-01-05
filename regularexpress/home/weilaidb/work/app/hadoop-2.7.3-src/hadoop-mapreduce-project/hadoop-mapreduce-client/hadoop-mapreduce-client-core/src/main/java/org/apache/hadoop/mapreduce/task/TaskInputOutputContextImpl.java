package org.apache.hadoop.mapreduce.task;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.mapreduce.OutputCommitter;
import org.apache.hadoop.mapreduce.RecordWriter;
import org.apache.hadoop.mapreduce.StatusReporter;
import org.apache.hadoop.mapreduce.TaskAttemptID;
import org.apache.hadoop.mapreduce.TaskInputOutputContext;
import org.apache.hadoop.mapreduce.Mapper;
import org.apache.hadoop.mapreduce.Reducer;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public abstract class TaskInputOutputContextImpl<KEYIN,VALUEIN,KEYOUT,VALUEOUT>
extends TaskAttemptContextImpl
implements TaskInputOutputContext<KEYIN, VALUEIN, KEYOUT, VALUEOUT>
