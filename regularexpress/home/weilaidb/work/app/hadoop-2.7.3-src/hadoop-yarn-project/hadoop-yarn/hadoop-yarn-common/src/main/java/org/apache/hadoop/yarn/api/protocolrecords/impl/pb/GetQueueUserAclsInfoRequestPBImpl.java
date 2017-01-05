package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.protocolrecords.GetQueueUserAclsInfoRequest;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetQueueUserAclsInfoRequestProto;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class GetQueueUserAclsInfoRequestPBImpl extends GetQueueUserAclsInfoRequest
