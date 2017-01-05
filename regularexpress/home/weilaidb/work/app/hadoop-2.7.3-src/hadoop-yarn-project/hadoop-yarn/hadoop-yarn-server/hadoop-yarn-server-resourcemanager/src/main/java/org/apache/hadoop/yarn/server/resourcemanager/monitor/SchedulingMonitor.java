package org.apache.hadoop.yarn.server.resourcemanager.monitor;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.service.AbstractService;
import org.apache.hadoop.yarn.server.resourcemanager.RMContext;
import org.apache.hadoop.yarn.server.resourcemanager.scheduler.PreemptableResourceScheduler;
import com.google.common.annotations.VisibleForTesting;
public class SchedulingMonitor extends AbstractService
