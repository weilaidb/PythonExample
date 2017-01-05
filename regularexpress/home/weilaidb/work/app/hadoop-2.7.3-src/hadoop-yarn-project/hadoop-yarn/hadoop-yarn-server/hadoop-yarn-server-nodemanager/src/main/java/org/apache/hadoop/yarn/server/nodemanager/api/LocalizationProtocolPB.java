package org.apache.hadoop.yarn.server.nodemanager.api;
import org.apache.hadoop.ipc.ProtocolInfo;
import org.apache.hadoop.yarn.proto.LocalizationProtocol.LocalizationProtocolService;
@ProtocolInfo(protocolName = "org.apache.hadoop.yarn.server.nodemanager.api.LocalizationProtocolPB",
protocolVersion = 1)
public interface LocalizationProtocolPB extends LocalizationProtocolService.BlockingInterface
