package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.protocolrecords.MoveApplicationAcrossQueuesResponse;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.MoveApplicationAcrossQueuesResponseProto;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class MoveApplicationAcrossQueuesResponsePBImpl extends MoveApplicationAcrossQueuesResponse
