package org.apache.hadoop.yarn.server.nodemanager.containermanager.loghandler;
import org.apache.hadoop.yarn.event.EventHandler;
import org.apache.hadoop.yarn.server.nodemanager.containermanager.loghandler.event.LogHandlerEvent;
public interface LogHandler extends EventHandler<LogHandlerEvent>
