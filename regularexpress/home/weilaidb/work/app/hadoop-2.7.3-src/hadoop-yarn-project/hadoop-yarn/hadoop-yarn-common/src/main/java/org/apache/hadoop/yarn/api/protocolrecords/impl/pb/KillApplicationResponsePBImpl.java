package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.protocolrecords.KillApplicationResponse;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.KillApplicationResponseProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.KillApplicationResponseProtoOrBuilder;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class KillApplicationResponsePBImpl extends KillApplicationResponse
