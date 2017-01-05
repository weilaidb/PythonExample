package org.apache.hadoop.yarn.api;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.ipc.ProtocolInfo;
import org.apache.hadoop.yarn.proto.ContainerManagementProtocol.ContainerManagementProtocolService;
@Private
@Unstable
@ProtocolInfo(
protocolName = "org.apache.hadoop.yarn.api.ContainerManagementProtocolPB",
protocolVersion = 1)
public interface ContainerManagementProtocolPB extends ContainerManagementProtocolService.BlockingInterface
