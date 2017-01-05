package org.apache.hadoop.yarn;
import org.junit.Assert;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.hadoop.yarn.exceptions.YarnRuntimeException;
import org.apache.hadoop.yarn.factories.RpcClientFactory;
import org.apache.hadoop.yarn.factories.RpcServerFactory;
import org.apache.hadoop.yarn.factories.impl.pb.RpcClientFactoryPBImpl;
import org.apache.hadoop.yarn.factories.impl.pb.RpcServerFactoryPBImpl;
import org.apache.hadoop.yarn.factory.providers.RpcFactoryProvider;
import org.junit.Test;
public class TestRpcFactoryProvider
