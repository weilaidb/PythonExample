package org.apache.hadoop.io.retry;
import java.lang.reflect.Method;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.ipc.RetriableException;
@InterfaceAudience.Private
public class LossyRetryInvocationHandler<T> extends RetryInvocationHandler<T>
