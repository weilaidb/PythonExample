package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Evolving;
import org.apache.hadoop.yarn.api.records.NodeId;
import org.apache.hadoop.yarn.api.records.impl.pb.NodeIdPBImpl;
import org.apache.hadoop.yarn.proto.YarnProtos.NodeIdProto;
import org.apache.hadoop.yarn.api.protocolrecords.GetLabelsToNodesResponse;
import org.apache.hadoop.yarn.proto.YarnProtos.LabelsToNodeIdsProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetLabelsToNodesResponseProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetLabelsToNodesResponseProtoOrBuilder;
public class GetLabelsToNodesResponsePBImpl extends
GetLabelsToNodesResponse
