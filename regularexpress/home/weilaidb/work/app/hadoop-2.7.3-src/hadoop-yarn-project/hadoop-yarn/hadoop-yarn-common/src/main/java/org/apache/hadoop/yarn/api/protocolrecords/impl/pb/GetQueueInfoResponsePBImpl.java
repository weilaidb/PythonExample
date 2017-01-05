package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.protocolrecords.GetQueueInfoResponse;
import org.apache.hadoop.yarn.api.records.QueueInfo;
import org.apache.hadoop.yarn.api.records.impl.pb.QueueInfoPBImpl;
import org.apache.hadoop.yarn.proto.YarnProtos.QueueInfoProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetQueueInfoResponseProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetQueueInfoResponseProtoOrBuilder;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class GetQueueInfoResponsePBImpl extends GetQueueInfoResponse
