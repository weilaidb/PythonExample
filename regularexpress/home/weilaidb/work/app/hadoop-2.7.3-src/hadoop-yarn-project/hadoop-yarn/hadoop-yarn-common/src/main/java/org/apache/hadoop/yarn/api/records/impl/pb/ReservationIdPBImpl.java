package org.apache.hadoop.yarn.api.records.impl.pb;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.records.ReservationId;
import org.apache.hadoop.yarn.proto.YarnProtos.ReservationIdProto;
import com.google.common.base.Preconditions;
@Private
@Unstable
public class ReservationIdPBImpl extends ReservationId
