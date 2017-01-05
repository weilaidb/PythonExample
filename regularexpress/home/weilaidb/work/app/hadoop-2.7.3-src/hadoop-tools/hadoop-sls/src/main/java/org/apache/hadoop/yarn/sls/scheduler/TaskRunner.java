package org.apache.hadoop.yarn.sls.scheduler;
import java.io.IOException;
import java.text.MessageFormat;
import java.util.Queue;
import java.util.concurrent.DelayQueue;
import java.util.concurrent.Delayed;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.concurrent.TimeUnit;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.exceptions.YarnException;
@Private
@Unstable
public class TaskRunner
