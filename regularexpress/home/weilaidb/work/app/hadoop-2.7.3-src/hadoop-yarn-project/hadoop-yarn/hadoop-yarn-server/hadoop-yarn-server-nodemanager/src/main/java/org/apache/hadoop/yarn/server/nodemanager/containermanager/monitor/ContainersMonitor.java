package org.apache.hadoop.yarn.server.nodemanager.containermanager.monitor;
import org.apache.hadoop.service.Service;
import org.apache.hadoop.yarn.event.EventHandler;
import org.apache.hadoop.yarn.server.nodemanager.ResourceView;
public interface ContainersMonitor extends Service,
EventHandler<ContainersMonitorEvent>, ResourceView
