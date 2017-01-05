package org.apache.hadoop.yarn.api.impl.pb.service;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.yarn.api.ContainerManagementProtocol;
import org.apache.hadoop.yarn.api.ContainerManagementProtocolPB;
import org.apache.hadoop.yarn.api.protocolrecords.GetContainerStatusesResponse;
import org.apache.hadoop.yarn.api.protocolrecords.StartContainersResponse;
import org.apache.hadoop.yarn.api.protocolrecords.StopContainersResponse;
import org.apache.hadoop.yarn.api.protocolrecords.impl.pb.GetContainerStatusesRequestPBImpl;
import org.apache.hadoop.yarn.api.protocolrecords.impl.pb.GetContainerStatusesResponsePBImpl;
import org.apache.hadoop.yarn.api.protocolrecords.impl.pb.StartContainersRequestPBImpl;
import org.apache.hadoop.yarn.api.protocolrecords.impl.pb.StartContainersResponsePBImpl;
import org.apache.hadoop.yarn.api.protocolrecords.impl.pb.StopContainersRequestPBImpl;
import org.apache.hadoop.yarn.api.protocolrecords.impl.pb.StopContainersResponsePBImpl;
import org.apache.hadoop.yarn.exceptions.YarnException;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetContainerStatusesRequestProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetContainerStatusesResponseProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.StartContainersRequestProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.StartContainersResponseProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.StopContainersRequestProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.StopContainersResponseProto;
import com.google.protobuf.RpcController;
import com.google.protobuf.ServiceException;
@Private
public class ContainerManagementProtocolPBServiceImpl implements ContainerManagementProtocolPB
