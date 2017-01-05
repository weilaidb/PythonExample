package org.apache.hadoop.yarn;
import java.lang.Thread.UncaughtExceptionHandler;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Evolving;
import org.apache.hadoop.util.ExitUtil;
import org.apache.hadoop.util.ShutdownHookManager;
@Public
@Evolving
public class YarnUncaughtExceptionHandler implements UncaughtExceptionHandler
