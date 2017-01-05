package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.protocolrecords.RegisterApplicationMasterRequest;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.RegisterApplicationMasterRequestProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.RegisterApplicationMasterRequestProtoOrBuilder;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class RegisterApplicationMasterRequestPBImpl extends RegisterApplicationMasterRequest
