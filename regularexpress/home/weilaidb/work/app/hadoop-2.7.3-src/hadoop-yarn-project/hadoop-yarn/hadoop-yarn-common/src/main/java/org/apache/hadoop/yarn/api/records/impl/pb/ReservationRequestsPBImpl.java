package org.apache.hadoop.yarn.api.records.impl.pb;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.apache.hadoop.yarn.api.records.ReservationRequest;
import org.apache.hadoop.yarn.api.records.ReservationRequestInterpreter;
import org.apache.hadoop.yarn.api.records.ReservationRequests;
import org.apache.hadoop.yarn.proto.YarnProtos.ReservationRequestInterpreterProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ReservationRequestProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ReservationRequestsProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ReservationRequestsProtoOrBuilder;
public class ReservationRequestsPBImpl extends ReservationRequests
