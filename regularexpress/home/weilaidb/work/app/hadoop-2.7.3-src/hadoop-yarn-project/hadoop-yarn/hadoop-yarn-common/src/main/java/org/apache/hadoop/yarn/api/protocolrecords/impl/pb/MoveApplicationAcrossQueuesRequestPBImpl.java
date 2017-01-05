package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.protocolrecords.MoveApplicationAcrossQueuesRequest;
import org.apache.hadoop.yarn.api.records.ApplicationId;
import org.apache.hadoop.yarn.api.records.impl.pb.ApplicationIdPBImpl;
import org.apache.hadoop.yarn.proto.YarnProtos.ApplicationIdProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.MoveApplicationAcrossQueuesRequestProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.MoveApplicationAcrossQueuesRequestProtoOrBuilder;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class MoveApplicationAcrossQueuesRequestPBImpl extends MoveApplicationAcrossQueuesRequest
