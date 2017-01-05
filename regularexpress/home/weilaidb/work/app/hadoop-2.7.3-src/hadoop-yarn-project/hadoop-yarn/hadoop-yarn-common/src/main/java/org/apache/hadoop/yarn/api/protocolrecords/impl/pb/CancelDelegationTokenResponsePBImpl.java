package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.security.proto.SecurityProtos.CancelDelegationTokenResponseProto;
import org.apache.hadoop.yarn.api.protocolrecords.CancelDelegationTokenResponse;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class CancelDelegationTokenResponsePBImpl extends CancelDelegationTokenResponse
