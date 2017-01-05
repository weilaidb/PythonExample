package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;
import org.apache.hadoop.yarn.api.records.NodeId;
import org.apache.hadoop.yarn.api.records.impl.pb.NodeIdPBImpl;
import org.apache.hadoop.yarn.proto.YarnProtos.NodeIdProto;
import org.apache.hadoop.yarn.api.protocolrecords.GetNodesToLabelsResponse;
import com.google.common.collect.Sets;
import org.apache.hadoop.yarn.proto.YarnProtos.NodeIdToLabelsProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetNodesToLabelsResponseProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetNodesToLabelsResponseProtoOrBuilder;
public class GetNodesToLabelsResponsePBImpl extends
GetNodesToLabelsResponse
