package org.apache.hadoop.io.retry;
import java.io.Closeable;
import org.apache.hadoop.classification.InterfaceStability;
@InterfaceStability.Evolving
public interface FailoverProxyProvider<T> extends Closeable
