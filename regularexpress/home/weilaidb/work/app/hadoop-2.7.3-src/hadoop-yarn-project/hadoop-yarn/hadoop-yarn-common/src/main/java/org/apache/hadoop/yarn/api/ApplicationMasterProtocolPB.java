package org.apache.hadoop.yarn.api;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.ipc.ProtocolInfo;
import org.apache.hadoop.yarn.proto.ApplicationMasterProtocol.ApplicationMasterProtocolService;
@Private
@Unstable
@ProtocolInfo(protocolName = "org.apache.hadoop.yarn.api.ApplicationMasterProtocolPB",
protocolVersion = 1)
public interface ApplicationMasterProtocolPB extends ApplicationMasterProtocolService.BlockingInterface
