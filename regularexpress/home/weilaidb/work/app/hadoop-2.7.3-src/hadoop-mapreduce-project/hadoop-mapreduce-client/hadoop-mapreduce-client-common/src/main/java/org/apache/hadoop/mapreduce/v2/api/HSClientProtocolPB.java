package org.apache.hadoop.mapreduce.v2.api;
import org.apache.hadoop.ipc.ProtocolInfo;
import org.apache.hadoop.yarn.proto.HSClientProtocol.HSClientProtocolService;
@ProtocolInfo(protocolName = "org.apache.hadoop.mapreduce.v2.api.HSClientProtocolPB",
protocolVersion = 1)
public interface HSClientProtocolPB extends HSClientProtocolService.BlockingInterface
