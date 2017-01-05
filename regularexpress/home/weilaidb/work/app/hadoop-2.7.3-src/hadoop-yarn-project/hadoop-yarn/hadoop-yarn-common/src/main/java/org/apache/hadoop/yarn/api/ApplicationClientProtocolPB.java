package org.apache.hadoop.yarn.api;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.ipc.ProtocolInfo;
import org.apache.hadoop.yarn.proto.ApplicationClientProtocol.ApplicationClientProtocolService;
@Private
@Unstable
@ProtocolInfo(protocolName = "org.apache.hadoop.yarn.api.ApplicationClientProtocolPB",
protocolVersion = 1)
public interface ApplicationClientProtocolPB extends ApplicationClientProtocolService.BlockingInterface
