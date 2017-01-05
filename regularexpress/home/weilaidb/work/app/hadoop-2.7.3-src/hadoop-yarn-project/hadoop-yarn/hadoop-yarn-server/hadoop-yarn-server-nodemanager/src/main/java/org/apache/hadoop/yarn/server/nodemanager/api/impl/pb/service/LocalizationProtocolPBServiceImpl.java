package org.apache.hadoop.yarn.server.nodemanager.api.impl.pb.service;
import java.io.IOException;
import org.apache.hadoop.yarn.server.nodemanager.api.protocolrecords.impl.pb.LocalizerHeartbeatResponsePBImpl;
import org.apache.hadoop.yarn.server.nodemanager.api.protocolrecords.impl.pb.LocalizerStatusPBImpl;
import com.google.protobuf.RpcController;
import com.google.protobuf.ServiceException;
import org.apache.hadoop.yarn.exceptions.YarnException;
import org.apache.hadoop.yarn.proto.YarnServerNodemanagerServiceProtos.LocalizerHeartbeatResponseProto;
import org.apache.hadoop.yarn.proto.YarnServerNodemanagerServiceProtos.LocalizerStatusProto;
import org.apache.hadoop.yarn.server.nodemanager.api.LocalizationProtocol;
import org.apache.hadoop.yarn.server.nodemanager.api.LocalizationProtocolPB;
import org.apache.hadoop.yarn.server.nodemanager.api.protocolrecords.LocalizerHeartbeatResponse;
public class LocalizationProtocolPBServiceImpl implements LocalizationProtocolPB
