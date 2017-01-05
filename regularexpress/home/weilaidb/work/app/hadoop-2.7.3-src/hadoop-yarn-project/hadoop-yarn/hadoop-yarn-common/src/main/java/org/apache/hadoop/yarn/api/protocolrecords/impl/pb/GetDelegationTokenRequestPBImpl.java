package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.security.proto.SecurityProtos.GetDelegationTokenRequestProto;
import org.apache.hadoop.security.proto.SecurityProtos.GetDelegationTokenRequestProtoOrBuilder;
import org.apache.hadoop.yarn.api.protocolrecords.GetDelegationTokenRequest;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class GetDelegationTokenRequestPBImpl extends GetDelegationTokenRequest
