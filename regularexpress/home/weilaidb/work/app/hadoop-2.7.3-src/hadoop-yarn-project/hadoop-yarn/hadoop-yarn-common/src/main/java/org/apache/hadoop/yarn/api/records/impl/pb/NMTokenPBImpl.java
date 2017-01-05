package org.apache.hadoop.yarn.api.records.impl.pb;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.security.proto.SecurityProtos.TokenProto;
import org.apache.hadoop.yarn.api.records.NMToken;
import org.apache.hadoop.yarn.api.records.NodeId;
import org.apache.hadoop.yarn.api.records.Token;
import org.apache.hadoop.yarn.proto.YarnProtos.NodeIdProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.NMTokenProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.NMTokenProtoOrBuilder;
@Private
@Unstable
public class NMTokenPBImpl extends NMToken
