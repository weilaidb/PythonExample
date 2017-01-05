package org.apache.hadoop.mapreduce.v2.app.job.event;
import java.util.List;
import org.apache.hadoop.mapreduce.Counters;
import org.apache.hadoop.mapreduce.v2.api.records.Phase;
import org.apache.hadoop.mapreduce.v2.api.records.TaskAttemptId;
import org.apache.hadoop.mapreduce.v2.api.records.TaskAttemptState;
public class TaskAttemptStatusUpdateEvent extends TaskAttemptEvent
