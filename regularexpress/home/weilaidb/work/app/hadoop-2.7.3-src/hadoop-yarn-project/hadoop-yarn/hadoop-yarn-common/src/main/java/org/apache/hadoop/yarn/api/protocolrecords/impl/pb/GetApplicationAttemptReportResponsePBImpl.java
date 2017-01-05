package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.protocolrecords.GetApplicationAttemptReportResponse;
import org.apache.hadoop.yarn.api.records.ApplicationAttemptReport;
import org.apache.hadoop.yarn.api.records.impl.pb.ApplicationAttemptReportPBImpl;
import org.apache.hadoop.yarn.proto.YarnProtos.ApplicationAttemptReportProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetApplicationAttemptReportResponseProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetApplicationAttemptReportResponseProtoOrBuilder;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class GetApplicationAttemptReportResponsePBImpl extends
GetApplicationAttemptReportResponse
