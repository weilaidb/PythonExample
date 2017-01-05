package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import java.util.EnumSet;
import java.util.Iterator;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.protocolrecords.GetClusterNodesRequest;
import org.apache.hadoop.yarn.api.records.NodeState;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoUtils;
import org.apache.hadoop.yarn.proto.YarnProtos.NodeStateProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetClusterNodesRequestProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetClusterNodesRequestProtoOrBuilder;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class GetClusterNodesRequestPBImpl extends GetClusterNodesRequest
