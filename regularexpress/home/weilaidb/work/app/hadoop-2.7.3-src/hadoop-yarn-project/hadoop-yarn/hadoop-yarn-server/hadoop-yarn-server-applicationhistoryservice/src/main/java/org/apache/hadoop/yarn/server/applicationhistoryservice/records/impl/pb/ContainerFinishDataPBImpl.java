package org.apache.hadoop.yarn.server.applicationhistoryservice.records.impl.pb;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.api.records.ContainerState;
import org.apache.hadoop.yarn.api.records.impl.pb.ContainerIdPBImpl;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoUtils;
import org.apache.hadoop.yarn.proto.ApplicationHistoryServerProtos.ContainerFinishDataProto;
import org.apache.hadoop.yarn.proto.ApplicationHistoryServerProtos.ContainerFinishDataProtoOrBuilder;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerIdProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerStateProto;
import org.apache.hadoop.yarn.server.applicationhistoryservice.records.ContainerFinishData;
import com.google.protobuf.TextFormat;
public class ContainerFinishDataPBImpl extends ContainerFinishData
