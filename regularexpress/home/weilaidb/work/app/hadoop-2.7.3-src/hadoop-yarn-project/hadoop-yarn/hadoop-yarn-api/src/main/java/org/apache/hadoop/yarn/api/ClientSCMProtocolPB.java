package org.apache.hadoop.yarn.api;
import org.apache.hadoop.ipc.ProtocolInfo;
import org.apache.hadoop.yarn.proto.ClientSCMProtocol.ClientSCMProtocolService;
@ProtocolInfo(protocolName = "org.apache.hadoop.yarn.api.ClientSCMProtocolPB",
protocolVersion = 1)
public interface ClientSCMProtocolPB extends
ClientSCMProtocolService.BlockingInterface
