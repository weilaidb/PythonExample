package org.apache.hadoop.yarn.server.api;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.ipc.ProtocolInfo;
import org.apache.hadoop.yarn.proto.ResourceManagerAdministrationProtocol.ResourceManagerAdministrationProtocolService;
@Private
@Unstable
@ProtocolInfo(
protocolName = "org.apache.hadoop.yarn.server.api.ResourceManagerAdministrationProtocolPB",
protocolVersion = 1)
public interface ResourceManagerAdministrationProtocolPB extends ResourceManagerAdministrationProtocolService.BlockingInterface
