package org.apache.hadoop.mapreduce.v2.app.job.event;
import org.apache.hadoop.mapreduce.OutputCommitter;
import org.apache.hadoop.mapreduce.jobhistory.JobHistoryParser.TaskAttemptInfo;
import org.apache.hadoop.mapreduce.v2.api.records.TaskAttemptId;
public class TaskAttemptRecoverEvent extends TaskAttemptEvent
