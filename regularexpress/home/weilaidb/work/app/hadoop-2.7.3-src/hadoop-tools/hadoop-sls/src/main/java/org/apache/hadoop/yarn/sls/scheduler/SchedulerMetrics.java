package org.apache.hadoop.yarn.sls.scheduler;
import java.util.HashSet;
import java.util.Set;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.records.ApplicationAttemptId;
import org.apache.hadoop.yarn.server.resourcemanager.scheduler
.ResourceScheduler;
import org.apache.hadoop.yarn.server.resourcemanager.scheduler
.SchedulerAppReport;
import com.codahale.metrics.Gauge;
import com.codahale.metrics.MetricRegistry;
@Private
@Unstable
public abstract class SchedulerMetrics
