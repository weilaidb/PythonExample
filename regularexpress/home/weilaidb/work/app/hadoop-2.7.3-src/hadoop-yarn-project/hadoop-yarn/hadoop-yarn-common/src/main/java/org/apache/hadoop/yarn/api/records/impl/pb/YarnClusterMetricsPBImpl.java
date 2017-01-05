package org.apache.hadoop.yarn.api.records.impl.pb;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.records.YarnClusterMetrics;
import org.apache.hadoop.yarn.proto.YarnProtos.YarnClusterMetricsProto;
import org.apache.hadoop.yarn.proto.YarnProtos.YarnClusterMetricsProtoOrBuilder;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class YarnClusterMetricsPBImpl extends YarnClusterMetrics
