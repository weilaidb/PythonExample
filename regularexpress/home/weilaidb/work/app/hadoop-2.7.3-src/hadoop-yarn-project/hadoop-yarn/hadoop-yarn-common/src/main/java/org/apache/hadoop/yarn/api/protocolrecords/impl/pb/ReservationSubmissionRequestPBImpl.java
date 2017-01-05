package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import org.apache.hadoop.yarn.api.protocolrecords.ReservationSubmissionRequest;
import org.apache.hadoop.yarn.api.records.ReservationDefinition;
import org.apache.hadoop.yarn.api.records.impl.pb.ReservationDefinitionPBImpl;
import org.apache.hadoop.yarn.proto.YarnProtos.ReservationDefinitionProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.ReservationSubmissionRequestProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.ReservationSubmissionRequestProtoOrBuilder;
import com.google.protobuf.TextFormat;
public class ReservationSubmissionRequestPBImpl extends
ReservationSubmissionRequest
