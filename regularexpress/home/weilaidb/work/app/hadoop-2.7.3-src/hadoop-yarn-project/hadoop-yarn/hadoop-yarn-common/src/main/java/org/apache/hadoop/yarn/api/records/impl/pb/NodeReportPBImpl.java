package org.apache.hadoop.yarn.api.records.impl.pb;
import java.util.HashSet;
import java.util.Set;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.records.NodeId;
import org.apache.hadoop.yarn.api.records.NodeReport;
import org.apache.hadoop.yarn.api.records.NodeState;
import org.apache.hadoop.yarn.api.records.Resource;
import org.apache.hadoop.yarn.proto.YarnProtos.NodeIdProto;
import org.apache.hadoop.yarn.proto.YarnProtos.NodeReportProto;
import org.apache.hadoop.yarn.proto.YarnProtos.NodeReportProtoOrBuilder;
import org.apache.hadoop.yarn.proto.YarnProtos.ResourceProto;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class NodeReportPBImpl extends NodeReport
