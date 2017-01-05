package org.apache.hadoop.yarn.server.nodemanager.containermanager.application;
import java.util.Map;
import org.apache.hadoop.yarn.api.records.ApplicationId;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.event.EventHandler;
import org.apache.hadoop.yarn.server.nodemanager.containermanager.container.Container;
public interface Application extends EventHandler<ApplicationEvent>
