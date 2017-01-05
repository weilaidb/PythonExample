package org.apache.hadoop.yarn.server.api;
import org.apache.hadoop.ipc.ProtocolInfo;
import org.apache.hadoop.yarn.proto.ResourceTracker.ResourceTrackerService;
@ProtocolInfo(
protocolName = "org.apache.hadoop.yarn.server.api.ResourceTrackerPB",
protocolVersion = 1)
public interface ResourceTrackerPB extends ResourceTrackerService.BlockingInterface
