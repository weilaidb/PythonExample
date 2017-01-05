package org.apache.hadoop.mapreduce.v2.app.job.event;
import org.apache.hadoop.mapreduce.v2.api.records.JobId;
import org.apache.hadoop.yarn.event.AbstractEvent;
public class JobFinishEvent
extends AbstractEvent<JobFinishEvent.Type>
