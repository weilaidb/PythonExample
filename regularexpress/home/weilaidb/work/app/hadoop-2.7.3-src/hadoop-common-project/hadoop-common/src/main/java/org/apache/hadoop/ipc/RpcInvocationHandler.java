package org.apache.hadoop.ipc;
import java.io.Closeable;
import java.lang.reflect.InvocationHandler;
import org.apache.hadoop.ipc.Client.ConnectionId;
public interface RpcInvocationHandler extends InvocationHandler, Closeable
