package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.protocolrecords.GetApplicationAttemptReportRequest;
import org.apache.hadoop.yarn.api.records.ApplicationAttemptId;
import org.apache.hadoop.yarn.api.records.impl.pb.ApplicationAttemptIdPBImpl;
import org.apache.hadoop.yarn.proto.YarnProtos.ApplicationAttemptIdProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetApplicationAttemptReportRequestProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetApplicationAttemptReportRequestProtoOrBuilder;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class GetApplicationAttemptReportRequestPBImpl extends
GetApplicationAttemptReportRequest
