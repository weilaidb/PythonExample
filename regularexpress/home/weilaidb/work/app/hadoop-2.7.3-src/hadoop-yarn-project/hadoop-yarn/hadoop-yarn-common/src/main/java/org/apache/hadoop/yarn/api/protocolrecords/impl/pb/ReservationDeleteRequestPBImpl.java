package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import org.apache.hadoop.yarn.api.protocolrecords.ReservationDeleteRequest;
import org.apache.hadoop.yarn.api.records.ReservationId;
import org.apache.hadoop.yarn.api.records.impl.pb.ReservationIdPBImpl;
import org.apache.hadoop.yarn.proto.YarnProtos.ReservationIdProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.ReservationDeleteRequestProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.ReservationDeleteRequestProtoOrBuilder;
import com.google.protobuf.TextFormat;
public class ReservationDeleteRequestPBImpl extends ReservationDeleteRequest
