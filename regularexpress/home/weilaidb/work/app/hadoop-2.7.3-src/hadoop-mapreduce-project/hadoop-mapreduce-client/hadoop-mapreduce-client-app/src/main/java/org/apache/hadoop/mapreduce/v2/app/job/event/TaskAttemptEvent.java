package org.apache.hadoop.mapreduce.v2.app.job.event;
import org.apache.hadoop.yarn.event.AbstractEvent;
import org.apache.hadoop.mapreduce.v2.api.records.TaskAttemptId;
public class TaskAttemptEvent extends AbstractEvent<TaskAttemptEventType>
