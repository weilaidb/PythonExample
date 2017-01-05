package org.apache.hadoop.mapreduce.task;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.mapreduce.InputSplit;
import org.apache.hadoop.mapreduce.MapContext;
import org.apache.hadoop.mapreduce.Mapper;
import org.apache.hadoop.mapreduce.OutputCommitter;
import org.apache.hadoop.mapreduce.RecordReader;
import org.apache.hadoop.mapreduce.RecordWriter;
import org.apache.hadoop.mapreduce.StatusReporter;
import org.apache.hadoop.mapreduce.TaskAttemptID;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class MapContextImpl<KEYIN,VALUEIN,KEYOUT,VALUEOUT>
extends TaskInputOutputContextImpl<KEYIN,VALUEIN,KEYOUT,VALUEOUT>
implements MapContext<KEYIN, VALUEIN, KEYOUT, VALUEOUT>
