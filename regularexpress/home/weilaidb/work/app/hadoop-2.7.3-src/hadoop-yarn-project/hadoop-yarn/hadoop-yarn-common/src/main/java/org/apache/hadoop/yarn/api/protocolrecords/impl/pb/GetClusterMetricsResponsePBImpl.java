package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.protocolrecords.GetClusterMetricsResponse;
import org.apache.hadoop.yarn.api.records.YarnClusterMetrics;
import org.apache.hadoop.yarn.api.records.impl.pb.YarnClusterMetricsPBImpl;
import org.apache.hadoop.yarn.proto.YarnProtos.YarnClusterMetricsProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetClusterMetricsResponseProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetClusterMetricsResponseProtoOrBuilder;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class GetClusterMetricsResponsePBImpl extends GetClusterMetricsResponse
