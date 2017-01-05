package org.apache.hadoop.yarn.sls.scheduler;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.records.QueueInfo;
import org.apache.hadoop.yarn.server.resourcemanager.scheduler.fifo
.FifoScheduler;
import com.codahale.metrics.Gauge;
@Private
@Unstable
public class FifoSchedulerMetrics extends SchedulerMetrics
