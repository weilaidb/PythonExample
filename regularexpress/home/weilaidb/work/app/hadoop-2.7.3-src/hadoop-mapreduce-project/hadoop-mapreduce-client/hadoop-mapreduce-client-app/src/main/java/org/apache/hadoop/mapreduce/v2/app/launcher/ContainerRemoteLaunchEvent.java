package org.apache.hadoop.mapreduce.v2.app.launcher;
import org.apache.hadoop.mapred.Task;
import org.apache.hadoop.mapreduce.v2.api.records.TaskAttemptId;
import org.apache.hadoop.util.StringInterner;
import org.apache.hadoop.yarn.api.records.Container;
import org.apache.hadoop.yarn.api.records.ContainerLaunchContext;
public class ContainerRemoteLaunchEvent extends ContainerLauncherEvent
