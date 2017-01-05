package org.apache.hadoop.mapreduce.v2.api;
import org.apache.hadoop.ipc.ProtocolInfo;
import org.apache.hadoop.yarn.proto.MRClientProtocol.MRClientProtocolService;
@ProtocolInfo(
protocolName = "org.apache.hadoop.mapreduce.v2.api.MRClientProtocolPB",
protocolVersion = 1)
public interface MRClientProtocolPB extends MRClientProtocolService.BlockingInterface
