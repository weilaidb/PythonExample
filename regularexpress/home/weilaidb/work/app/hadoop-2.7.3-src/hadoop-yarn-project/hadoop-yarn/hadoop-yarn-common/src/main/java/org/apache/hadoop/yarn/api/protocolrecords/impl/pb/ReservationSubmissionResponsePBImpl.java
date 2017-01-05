package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import org.apache.hadoop.yarn.api.protocolrecords.ReservationSubmissionResponse;
import org.apache.hadoop.yarn.api.records.ReservationId;
import org.apache.hadoop.yarn.api.records.impl.pb.ReservationIdPBImpl;
import org.apache.hadoop.yarn.proto.YarnProtos.ReservationIdProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.ReservationSubmissionResponseProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.ReservationSubmissionResponseProtoOrBuilder;
import com.google.protobuf.TextFormat;
public class ReservationSubmissionResponsePBImpl extends
ReservationSubmissionResponse
