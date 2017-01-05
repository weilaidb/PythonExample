package org.apache.hadoop.yarn.api.records.impl.pb;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.records.ApplicationResourceUsageReport;
import org.apache.hadoop.yarn.api.records.Resource;
import org.apache.hadoop.yarn.proto.YarnProtos.ApplicationResourceUsageReportProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ApplicationResourceUsageReportProtoOrBuilder;
import org.apache.hadoop.yarn.proto.YarnProtos.ResourceProto;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class ApplicationResourceUsageReportPBImpl
extends ApplicationResourceUsageReport
