package org.apache.hadoop.yarn.api.impl.pb.client;
import java.io.Closeable;
import java.io.IOException;
import java.net.InetSocketAddress;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.ipc.ProtobufRpcEngine;
import org.apache.hadoop.ipc.RPC;
import org.apache.hadoop.net.NetUtils;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.yarn.api.ContainerManagementProtocol;
import org.apache.hadoop.yarn.api.ContainerManagementProtocolPB;
import org.apache.hadoop.yarn.api.protocolrecords.GetContainerStatusesRequest;
import org.apache.hadoop.yarn.api.protocolrecords.GetContainerStatusesResponse;
import org.apache.hadoop.yarn.api.protocolrecords.StartContainersRequest;
import org.apache.hadoop.yarn.api.protocolrecords.StartContainersResponse;
import org.apache.hadoop.yarn.api.protocolrecords.StopContainersRequest;
import org.apache.hadoop.yarn.api.protocolrecords.StopContainersResponse;
import org.apache.hadoop.yarn.api.protocolrecords.impl.pb.GetContainerStatusesRequestPBImpl;
import org.apache.hadoop.yarn.api.protocolrecords.impl.pb.GetContainerStatusesResponsePBImpl;
import org.apache.hadoop.yarn.api.protocolrecords.impl.pb.StartContainersRequestPBImpl;
import org.apache.hadoop.yarn.api.protocolrecords.impl.pb.StartContainersResponsePBImpl;
import org.apache.hadoop.yarn.api.protocolrecords.impl.pb.StopContainersRequestPBImpl;
import org.apache.hadoop.yarn.api.protocolrecords.impl.pb.StopContainersResponsePBImpl;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.hadoop.yarn.exceptions.YarnException;
import org.apache.hadoop.yarn.ipc.RPCUtil;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetContainerStatusesRequestProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.StartContainersRequestProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.StopContainersRequestProto;
import com.google.protobuf.ServiceException;
@Private
public class ContainerManagementProtocolPBClientImpl implements ContainerManagementProtocol,
Closeable
