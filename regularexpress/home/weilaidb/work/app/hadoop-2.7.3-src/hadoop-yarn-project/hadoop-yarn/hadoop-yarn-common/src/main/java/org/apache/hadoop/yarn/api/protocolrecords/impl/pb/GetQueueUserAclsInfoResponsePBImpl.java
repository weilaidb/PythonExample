package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.protocolrecords.GetQueueUserAclsInfoResponse;
import org.apache.hadoop.yarn.api.records.QueueUserACLInfo;
import org.apache.hadoop.yarn.api.records.impl.pb.QueueUserACLInfoPBImpl;
import org.apache.hadoop.yarn.proto.YarnProtos.QueueUserACLInfoProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetQueueUserAclsInfoResponseProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetQueueUserAclsInfoResponseProtoOrBuilder;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class GetQueueUserAclsInfoResponsePBImpl extends GetQueueUserAclsInfoResponse
