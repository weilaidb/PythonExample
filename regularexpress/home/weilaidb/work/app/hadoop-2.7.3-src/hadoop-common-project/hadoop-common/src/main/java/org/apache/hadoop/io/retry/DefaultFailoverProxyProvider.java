package org.apache.hadoop.io.retry;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.ipc.RPC;
@InterfaceStability.Evolving
public class DefaultFailoverProxyProvider<T> implements FailoverProxyProvider<T>
