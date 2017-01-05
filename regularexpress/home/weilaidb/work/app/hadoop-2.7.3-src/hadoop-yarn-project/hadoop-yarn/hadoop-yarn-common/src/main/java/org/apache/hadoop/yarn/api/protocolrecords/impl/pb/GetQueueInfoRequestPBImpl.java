package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.protocolrecords.GetQueueInfoRequest;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetQueueInfoRequestProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetQueueInfoRequestProtoOrBuilder;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class GetQueueInfoRequestPBImpl extends GetQueueInfoRequest
