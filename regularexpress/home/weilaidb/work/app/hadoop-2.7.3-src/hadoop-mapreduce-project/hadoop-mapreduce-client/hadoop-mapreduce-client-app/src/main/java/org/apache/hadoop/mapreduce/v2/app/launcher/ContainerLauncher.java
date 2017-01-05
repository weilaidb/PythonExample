package org.apache.hadoop.mapreduce.v2.app.launcher;
import org.apache.hadoop.mapreduce.MRJobConfig;
import org.apache.hadoop.yarn.event.EventHandler;
public interface ContainerLauncher
extends EventHandler<ContainerLauncherEvent>
