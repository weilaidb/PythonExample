package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import org.apache.hadoop.yarn.api.protocolrecords.GetContainerReportResponse;
import org.apache.hadoop.yarn.api.records.ContainerReport;
import org.apache.hadoop.yarn.api.records.impl.pb.ContainerReportPBImpl;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerReportProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetContainerReportResponseProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetContainerReportResponseProtoOrBuilder;
import com.google.protobuf.TextFormat;
public class GetContainerReportResponsePBImpl extends
GetContainerReportResponse
