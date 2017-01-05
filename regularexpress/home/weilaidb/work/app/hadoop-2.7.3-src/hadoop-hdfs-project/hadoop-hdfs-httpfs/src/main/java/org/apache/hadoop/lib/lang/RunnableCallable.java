package org.apache.hadoop.lib.lang;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.lib.util.Check;
import java.util.concurrent.Callable;
@InterfaceAudience.Private
public class RunnableCallable implements Callable<Void>, Runnable
