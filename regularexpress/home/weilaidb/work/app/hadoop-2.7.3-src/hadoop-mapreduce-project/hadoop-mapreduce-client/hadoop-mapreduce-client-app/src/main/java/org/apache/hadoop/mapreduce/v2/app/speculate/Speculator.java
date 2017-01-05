package org.apache.hadoop.mapreduce.v2.app.speculate;
import org.apache.hadoop.mapreduce.v2.app.job.event.TaskAttemptStatusUpdateEvent.TaskAttemptStatus;
import org.apache.hadoop.yarn.event.EventHandler;
public interface Speculator
extends EventHandler<SpeculatorEvent>
