package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.protocolrecords.GetApplicationReportResponse;
import org.apache.hadoop.yarn.api.records.ApplicationReport;
import org.apache.hadoop.yarn.api.records.impl.pb.ApplicationReportPBImpl;
import org.apache.hadoop.yarn.proto.YarnProtos.ApplicationReportProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetApplicationReportResponseProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetApplicationReportResponseProtoOrBuilder;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class GetApplicationReportResponsePBImpl extends GetApplicationReportResponse
