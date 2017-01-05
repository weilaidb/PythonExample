package org.apache.hadoop.yarn.sls.scheduler;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.records.ApplicationAttemptId;
import org.apache.hadoop.yarn.server.resourcemanager.scheduler.fair
.FSAppAttempt;
import org.apache.hadoop.yarn.server.resourcemanager.scheduler.fair.FSQueue;
import org.apache.hadoop.yarn.server.resourcemanager.scheduler.fair.FairScheduler;
import com.codahale.metrics.Gauge;
import org.apache.hadoop.yarn.sls.SLSRunner;
@Private
@Unstable
public class FairSchedulerMetrics extends SchedulerMetrics
