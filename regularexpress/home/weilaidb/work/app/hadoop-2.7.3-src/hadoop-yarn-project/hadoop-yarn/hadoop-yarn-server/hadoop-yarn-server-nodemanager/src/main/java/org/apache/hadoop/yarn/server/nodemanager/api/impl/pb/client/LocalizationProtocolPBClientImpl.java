package org.apache.hadoop.yarn.server.nodemanager.api.impl.pb.client;
import java.io.Closeable;
import java.io.IOException;
import java.net.InetSocketAddress;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.ipc.ProtobufRpcEngine;
import org.apache.hadoop.ipc.RPC;
import org.apache.hadoop.yarn.exceptions.YarnException;
import org.apache.hadoop.yarn.ipc.RPCUtil;
import org.apache.hadoop.yarn.proto.YarnServerNodemanagerServiceProtos.LocalizerStatusProto;
import org.apache.hadoop.yarn.server.nodemanager.api.LocalizationProtocol;
import org.apache.hadoop.yarn.server.nodemanager.api.LocalizationProtocolPB;
import org.apache.hadoop.yarn.server.nodemanager.api.protocolrecords.LocalizerHeartbeatResponse;
import org.apache.hadoop.yarn.server.nodemanager.api.protocolrecords.LocalizerStatus;
import org.apache.hadoop.yarn.server.nodemanager.api.protocolrecords.impl.pb.LocalizerHeartbeatResponsePBImpl;
import org.apache.hadoop.yarn.server.nodemanager.api.protocolrecords.impl.pb.LocalizerStatusPBImpl;
import com.google.protobuf.ServiceException;
public class LocalizationProtocolPBClientImpl implements LocalizationProtocol,
Closeable
