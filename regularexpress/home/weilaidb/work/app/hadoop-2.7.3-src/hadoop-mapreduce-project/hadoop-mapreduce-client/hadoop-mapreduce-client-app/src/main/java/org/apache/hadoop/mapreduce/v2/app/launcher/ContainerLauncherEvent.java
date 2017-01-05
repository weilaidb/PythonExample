package org.apache.hadoop.mapreduce.v2.app.launcher;
import org.apache.hadoop.mapreduce.v2.api.records.TaskAttemptId;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.api.records.Token;
import org.apache.hadoop.yarn.event.AbstractEvent;
public class ContainerLauncherEvent
extends AbstractEvent<ContainerLauncher.EventType>
