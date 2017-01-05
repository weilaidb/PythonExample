package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.protocolrecords.GetNewApplicationResponse;
import org.apache.hadoop.yarn.api.records.ApplicationId;
import org.apache.hadoop.yarn.api.records.Resource;
import org.apache.hadoop.yarn.api.records.impl.pb.ApplicationIdPBImpl;
import org.apache.hadoop.yarn.api.records.impl.pb.ResourcePBImpl;
import org.apache.hadoop.yarn.proto.YarnProtos.ApplicationIdProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ResourceProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetNewApplicationResponseProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetNewApplicationResponseProtoOrBuilder;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class GetNewApplicationResponsePBImpl extends GetNewApplicationResponse
