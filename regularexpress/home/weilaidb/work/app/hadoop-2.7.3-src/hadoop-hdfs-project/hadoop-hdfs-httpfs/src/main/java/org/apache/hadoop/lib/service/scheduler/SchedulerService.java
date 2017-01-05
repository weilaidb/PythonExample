package org.apache.hadoop.lib.service.scheduler;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.lib.lang.RunnableCallable;
import org.apache.hadoop.lib.server.BaseService;
import org.apache.hadoop.lib.server.Server;
import org.apache.hadoop.lib.server.ServiceException;
import org.apache.hadoop.lib.service.Instrumentation;
import org.apache.hadoop.lib.service.Scheduler;
import org.apache.hadoop.lib.util.Check;
import org.apache.hadoop.util.Time;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import java.text.MessageFormat;
import java.util.concurrent.Callable;
import java.util.concurrent.ScheduledExecutorService;
import java.util.concurrent.ScheduledThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
@InterfaceAudience.Private
public class SchedulerService extends BaseService implements Scheduler
