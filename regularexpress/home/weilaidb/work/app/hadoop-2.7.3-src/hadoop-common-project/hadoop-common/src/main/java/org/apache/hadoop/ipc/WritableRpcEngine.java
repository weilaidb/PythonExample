package org.apache.hadoop.ipc;
import java.lang.reflect.Proxy;
import java.lang.reflect.Method;
import java.lang.reflect.InvocationTargetException;
import java.net.InetSocketAddress;
import java.io.*;
import java.util.concurrent.atomic.AtomicBoolean;
import javax.net.SocketFactory;
import org.apache.commons.logging.*;
import org.apache.hadoop.io.*;
import org.apache.hadoop.io.retry.RetryPolicy;
import org.apache.hadoop.ipc.Client.ConnectionId;
import org.apache.hadoop.ipc.RPC.RpcInvoker;
import org.apache.hadoop.ipc.VersionedProtocol;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.security.token.SecretManager;
import org.apache.hadoop.security.token.TokenIdentifier;
import org.apache.hadoop.util.Time;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.*;
import org.apache.htrace.Trace;
import org.apache.htrace.TraceScope;
@InterfaceStability.Evolving
public class WritableRpcEngine implements RpcEngine
