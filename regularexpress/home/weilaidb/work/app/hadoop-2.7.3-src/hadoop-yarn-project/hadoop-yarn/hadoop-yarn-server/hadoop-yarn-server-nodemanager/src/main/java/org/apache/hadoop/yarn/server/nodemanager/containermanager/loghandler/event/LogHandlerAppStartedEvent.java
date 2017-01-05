package org.apache.hadoop.yarn.server.nodemanager.containermanager.loghandler.event;
import java.util.Map;
import org.apache.hadoop.security.Credentials;
import org.apache.hadoop.yarn.api.records.ApplicationId;
import org.apache.hadoop.yarn.api.records.ApplicationAccessType;
import org.apache.hadoop.yarn.api.records.LogAggregationContext;
import org.apache.hadoop.yarn.logaggregation.ContainerLogsRetentionPolicy;
public class LogHandlerAppStartedEvent extends LogHandlerEvent
