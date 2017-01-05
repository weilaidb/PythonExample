package org.apache.hadoop.yarn.server.api;
import org.apache.hadoop.ipc.ProtocolInfo;
import org.apache.hadoop.yarn.proto.SCMUploaderProtocol.SCMUploaderProtocolService;
@ProtocolInfo(protocolName = "org.apache.hadoop.yarn.server.api.SCMUploaderProtocolPB",
protocolVersion = 1)
public interface SCMUploaderProtocolPB extends
SCMUploaderProtocolService.BlockingInterface
