package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.protocolrecords.FinishApplicationMasterResponse;
import org.apache.hadoop.yarn.proto.YarnProtos.ResourceRequestProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.FinishApplicationMasterResponseProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.FinishApplicationMasterResponseProtoOrBuilder;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class FinishApplicationMasterResponsePBImpl extends FinishApplicationMasterResponse
