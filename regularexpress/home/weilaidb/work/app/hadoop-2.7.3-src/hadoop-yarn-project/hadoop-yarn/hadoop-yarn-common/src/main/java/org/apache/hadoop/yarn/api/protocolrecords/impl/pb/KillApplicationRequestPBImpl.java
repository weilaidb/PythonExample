package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.protocolrecords.KillApplicationRequest;
import org.apache.hadoop.yarn.api.records.ApplicationId;
import org.apache.hadoop.yarn.api.records.impl.pb.ApplicationIdPBImpl;
import org.apache.hadoop.yarn.proto.YarnProtos.ApplicationIdProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.KillApplicationRequestProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.KillApplicationRequestProtoOrBuilder;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class KillApplicationRequestPBImpl extends KillApplicationRequest
