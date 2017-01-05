package org.apache.hadoop.mapreduce.v2.app.job.event;
import java.util.Map;
import org.apache.hadoop.mapreduce.v2.api.records.TaskAttemptId;
import org.apache.hadoop.yarn.api.records.ApplicationAccessType;
import org.apache.hadoop.yarn.api.records.Container;
public class TaskAttemptContainerAssignedEvent extends TaskAttemptEvent
