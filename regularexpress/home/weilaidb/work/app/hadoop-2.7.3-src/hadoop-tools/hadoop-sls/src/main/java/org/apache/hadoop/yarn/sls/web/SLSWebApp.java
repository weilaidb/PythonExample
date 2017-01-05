package org.apache.hadoop.yarn.sls.web;
import java.io.File;
import java.io.IOException;
import java.text.MessageFormat;
import java.util.HashMap;
import java.util.Map;
import java.util.Set;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import org.apache.commons.io.FileUtils;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.server.resourcemanager.scheduler.event
.SchedulerEventType;
import org.mortbay.jetty.Handler;
import org.mortbay.jetty.Server;
import org.mortbay.jetty.handler.AbstractHandler;
import org.mortbay.jetty.Request;
import org.apache.hadoop.yarn.sls.SLSRunner;
import org.apache.hadoop.yarn.sls.scheduler.FairSchedulerMetrics;
import org.apache.hadoop.yarn.sls.scheduler.ResourceSchedulerWrapper;
import org.apache.hadoop.yarn.sls.scheduler.SchedulerMetrics;
import com.codahale.metrics.Counter;
import com.codahale.metrics.Gauge;
import com.codahale.metrics.Histogram;
import com.codahale.metrics.MetricRegistry;
import org.mortbay.jetty.handler.ResourceHandler;
@Private
@Unstable
public class SLSWebApp extends HttpServlet
