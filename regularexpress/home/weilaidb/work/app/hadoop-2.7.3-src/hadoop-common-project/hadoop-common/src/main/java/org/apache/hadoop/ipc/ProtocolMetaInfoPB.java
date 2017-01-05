package org.apache.hadoop.ipc;
import org.apache.hadoop.ipc.protobuf.ProtocolInfoProtos.ProtocolInfoService;
@ProtocolInfo(
protocolName = "org.apache.hadoop.ipc.ProtocolMetaInfoPB",
protocolVersion = 1)
public interface ProtocolMetaInfoPB extends
ProtocolInfoService.BlockingInterface
