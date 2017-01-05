package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import org.apache.hadoop.yarn.api.protocolrecords.GetContainersRequest;
import org.apache.hadoop.yarn.api.records.ApplicationAttemptId;
import org.apache.hadoop.yarn.api.records.impl.pb.ApplicationAttemptIdPBImpl;
import org.apache.hadoop.yarn.proto.YarnProtos.ApplicationAttemptIdProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetContainersRequestProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetContainersRequestProtoOrBuilder;
import com.google.protobuf.TextFormat;
public class GetContainersRequestPBImpl extends GetContainersRequest
