package org.apache.hadoop.yarn.api;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.ipc.ProtocolInfo;
import org.apache.hadoop.yarn.proto.ApplicationHistoryProtocol.ApplicationHistoryProtocolService;
@Private
@Unstable
@ProtocolInfo(
protocolName = "org.apache.hadoop.yarn.api.ApplicationHistoryProtocolPB",
protocolVersion = 1)
public interface ApplicationHistoryProtocolPB extends
ApplicationHistoryProtocolService.BlockingInterface
