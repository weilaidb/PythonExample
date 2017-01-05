package org.apache.hadoop.yarn.server.api.protocolrecords.impl.pb;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Map.Entry;
import java.util.Set;
import org.apache.hadoop.yarn.api.records.NodeId;
import org.apache.hadoop.yarn.api.records.impl.pb.NodeIdPBImpl;
import org.apache.hadoop.yarn.proto.YarnProtos.NodeIdProto;
import org.apache.hadoop.yarn.proto.YarnProtos.NodeIdToLabelsProto;
import org.apache.hadoop.yarn.proto.YarnServerResourceManagerServiceProtos.ReplaceLabelsOnNodeRequestProto;
import org.apache.hadoop.yarn.proto.YarnServerResourceManagerServiceProtos.ReplaceLabelsOnNodeRequestProtoOrBuilder;
import org.apache.hadoop.yarn.server.api.protocolrecords.ReplaceLabelsOnNodeRequest;
import com.google.common.collect.Sets;
public class ReplaceLabelsOnNodeRequestPBImpl extends
ReplaceLabelsOnNodeRequest
