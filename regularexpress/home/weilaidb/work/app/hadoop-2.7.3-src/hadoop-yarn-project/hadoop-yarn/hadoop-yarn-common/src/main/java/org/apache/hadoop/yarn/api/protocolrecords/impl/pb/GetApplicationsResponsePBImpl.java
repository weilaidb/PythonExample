package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.protocolrecords.GetApplicationsResponse;
import org.apache.hadoop.yarn.api.records.ApplicationReport;
import org.apache.hadoop.yarn.api.records.impl.pb.ApplicationReportPBImpl;
import org.apache.hadoop.yarn.proto.YarnProtos.ApplicationReportProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetApplicationsResponseProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetApplicationsResponseProtoOrBuilder;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class GetApplicationsResponsePBImpl
extends GetApplicationsResponse
