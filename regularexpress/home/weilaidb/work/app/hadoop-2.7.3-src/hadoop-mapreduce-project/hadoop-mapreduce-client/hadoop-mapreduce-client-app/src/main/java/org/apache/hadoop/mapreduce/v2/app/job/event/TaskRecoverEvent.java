package org.apache.hadoop.mapreduce.v2.app.job.event;
import org.apache.hadoop.mapreduce.OutputCommitter;
import org.apache.hadoop.mapreduce.jobhistory.JobHistoryParser.TaskInfo;
import org.apache.hadoop.mapreduce.v2.api.records.TaskId;
public class TaskRecoverEvent extends TaskEvent
