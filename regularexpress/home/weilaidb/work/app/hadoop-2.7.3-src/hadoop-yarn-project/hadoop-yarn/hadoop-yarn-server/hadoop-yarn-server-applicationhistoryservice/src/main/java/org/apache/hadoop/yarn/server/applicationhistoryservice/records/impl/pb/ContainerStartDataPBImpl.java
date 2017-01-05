package org.apache.hadoop.yarn.server.applicationhistoryservice.records.impl.pb;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.api.records.NodeId;
import org.apache.hadoop.yarn.api.records.Priority;
import org.apache.hadoop.yarn.api.records.Resource;
import org.apache.hadoop.yarn.api.records.impl.pb.ContainerIdPBImpl;
import org.apache.hadoop.yarn.api.records.impl.pb.NodeIdPBImpl;
import org.apache.hadoop.yarn.api.records.impl.pb.PriorityPBImpl;
import org.apache.hadoop.yarn.api.records.impl.pb.ResourcePBImpl;
import org.apache.hadoop.yarn.proto.ApplicationHistoryServerProtos.ContainerStartDataProto;
import org.apache.hadoop.yarn.proto.ApplicationHistoryServerProtos.ContainerStartDataProtoOrBuilder;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerIdProto;
import org.apache.hadoop.yarn.proto.YarnProtos.NodeIdProto;
import org.apache.hadoop.yarn.proto.YarnProtos.PriorityProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ResourceProto;
import org.apache.hadoop.yarn.server.applicationhistoryservice.records.ContainerStartData;
import com.google.protobuf.TextFormat;
public class ContainerStartDataPBImpl extends ContainerStartData
