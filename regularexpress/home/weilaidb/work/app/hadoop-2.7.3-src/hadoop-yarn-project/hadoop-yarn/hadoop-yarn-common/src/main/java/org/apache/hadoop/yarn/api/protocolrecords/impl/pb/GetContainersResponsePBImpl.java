package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.protocolrecords.GetContainersResponse;
import org.apache.hadoop.yarn.api.records.ContainerReport;
import org.apache.hadoop.yarn.api.records.impl.pb.ContainerReportPBImpl;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerReportProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetContainersResponseProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetContainersResponseProtoOrBuilder;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class GetContainersResponsePBImpl extends GetContainersResponse
