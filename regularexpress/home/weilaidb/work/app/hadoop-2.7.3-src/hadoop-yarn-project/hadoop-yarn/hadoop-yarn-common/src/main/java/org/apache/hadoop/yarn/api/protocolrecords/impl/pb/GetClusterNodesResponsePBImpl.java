package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.protocolrecords.GetClusterNodesResponse;
import org.apache.hadoop.yarn.api.records.NodeReport;
import org.apache.hadoop.yarn.api.records.impl.pb.NodeReportPBImpl;
import org.apache.hadoop.yarn.proto.YarnProtos.NodeReportProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetClusterNodesResponseProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetClusterNodesResponseProtoOrBuilder;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class GetClusterNodesResponsePBImpl extends GetClusterNodesResponse
