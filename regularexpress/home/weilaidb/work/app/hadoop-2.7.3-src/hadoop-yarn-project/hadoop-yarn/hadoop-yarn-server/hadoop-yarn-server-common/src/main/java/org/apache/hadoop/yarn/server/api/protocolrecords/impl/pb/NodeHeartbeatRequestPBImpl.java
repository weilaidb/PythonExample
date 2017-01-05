package org.apache.hadoop.yarn.server.api.protocolrecords.impl.pb;
import org.apache.hadoop.yarn.proto.YarnServerCommonProtos.MasterKeyProto;
import org.apache.hadoop.yarn.proto.YarnServerCommonProtos.NodeStatusProto;
import org.apache.hadoop.yarn.proto.YarnServerCommonServiceProtos.NodeHeartbeatRequestProto;
import org.apache.hadoop.yarn.proto.YarnServerCommonServiceProtos.NodeHeartbeatRequestProtoOrBuilder;
import org.apache.hadoop.yarn.server.api.protocolrecords.NodeHeartbeatRequest;
import org.apache.hadoop.yarn.server.api.records.MasterKey;
import org.apache.hadoop.yarn.server.api.records.NodeStatus;
import org.apache.hadoop.yarn.server.api.records.impl.pb.MasterKeyPBImpl;
import org.apache.hadoop.yarn.server.api.records.impl.pb.NodeStatusPBImpl;
public class NodeHeartbeatRequestPBImpl extends NodeHeartbeatRequest
