package org.apache.hadoop.mapreduce.v2.app.rm;
import org.apache.hadoop.yarn.event.EventHandler;
public interface ContainerAllocator extends EventHandler<ContainerAllocatorEvent>
