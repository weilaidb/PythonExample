package org.apache.hadoop.yarn.api.records.impl.pb;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.records.ReservationRequest;
import org.apache.hadoop.yarn.api.records.Resource;
import org.apache.hadoop.yarn.proto.YarnProtos.ReservationRequestProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ReservationRequestProtoOrBuilder;
import org.apache.hadoop.yarn.proto.YarnProtos.ResourceProto;
@Private
@Unstable
public class ReservationRequestPBImpl extends ReservationRequest
