package org.apache.hadoop.yarn.server.nodemanager;
import java.net.InetSocketAddress;
import org.apache.hadoop.yarn.server.nodemanager.api.protocolrecords.LocalizerHeartbeatResponse;
import org.apache.hadoop.yarn.server.nodemanager.api.protocolrecords.LocalizerStatus;
import org.junit.Assert;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.ipc.Server;
import org.apache.hadoop.net.NetUtils;
import org.apache.hadoop.yarn.exceptions.YarnRuntimeException;
import org.apache.hadoop.yarn.factories.impl.pb.RpcClientFactoryPBImpl;
import org.apache.hadoop.yarn.factories.impl.pb.RpcServerFactoryPBImpl;
import org.apache.hadoop.yarn.server.nodemanager.api.LocalizationProtocol;
import org.junit.Test;
public class TestRPCFactories
