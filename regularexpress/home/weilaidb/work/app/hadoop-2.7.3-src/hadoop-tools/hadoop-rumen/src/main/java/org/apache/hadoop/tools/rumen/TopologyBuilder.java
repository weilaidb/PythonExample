package org.apache.hadoop.tools.rumen;
import java.util.Set;
import java.util.HashSet;
import java.util.Properties;
import java.util.StringTokenizer;
import org.apache.hadoop.mapreduce.jobhistory.HistoryEvent;
import org.apache.hadoop.mapreduce.jobhistory.TaskAttemptFinishedEvent;
import org.apache.hadoop.mapreduce.jobhistory.TaskAttemptUnsuccessfulCompletionEvent;
import org.apache.hadoop.mapreduce.jobhistory.MapAttemptFinishedEvent;
import org.apache.hadoop.mapreduce.jobhistory.ReduceAttemptFinishedEvent;
import org.apache.hadoop.mapreduce.jobhistory.TaskStartedEvent;
public class TopologyBuilder
