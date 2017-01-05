package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.protocolrecords.GetApplicationAttemptsResponse;
import org.apache.hadoop.yarn.api.records.ApplicationAttemptReport;
import org.apache.hadoop.yarn.api.records.impl.pb.ApplicationAttemptReportPBImpl;
import org.apache.hadoop.yarn.proto.YarnProtos.ApplicationAttemptReportProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetApplicationAttemptsResponseProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetApplicationAttemptsResponseProtoOrBuilder;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class GetApplicationAttemptsResponsePBImpl extends
GetApplicationAttemptsResponse
