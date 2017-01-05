package org.apache.hadoop.yarn.factory.providers;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.hadoop.yarn.exceptions.YarnRuntimeException;
import org.apache.hadoop.yarn.factories.RpcClientFactory;
import org.apache.hadoop.yarn.factories.RpcServerFactory;
@InterfaceAudience.LimitedPrivate()
public class RpcFactoryProvider
