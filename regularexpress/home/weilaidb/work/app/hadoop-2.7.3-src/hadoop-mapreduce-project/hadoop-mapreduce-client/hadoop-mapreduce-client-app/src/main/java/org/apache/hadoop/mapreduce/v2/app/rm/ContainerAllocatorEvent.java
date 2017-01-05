package org.apache.hadoop.mapreduce.v2.app.rm;
import org.apache.hadoop.yarn.event.AbstractEvent;
import org.apache.hadoop.mapreduce.v2.api.records.TaskAttemptId;
public class ContainerAllocatorEvent extends
AbstractEvent<ContainerAllocator.EventType>
