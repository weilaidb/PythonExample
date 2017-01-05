package org.apache.hadoop.yarn.server.api.protocolrecords.impl.pb;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.apache.hadoop.yarn.api.records.NodeId;
import org.apache.hadoop.yarn.api.records.ResourceOption;
import org.apache.hadoop.yarn.api.records.impl.pb.NodeIdPBImpl;
import org.apache.hadoop.yarn.api.records.impl.pb.ResourceOptionPBImpl;
import org.apache.hadoop.yarn.proto.YarnProtos.NodeIdProto;
import org.apache.hadoop.yarn.proto.YarnProtos.NodeResourceMapProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ResourceOptionProto;
import org.apache.hadoop.yarn.proto.YarnServerResourceManagerServiceProtos.UpdateNodeResourceRequestProto;
import org.apache.hadoop.yarn.proto.YarnServerResourceManagerServiceProtos.UpdateNodeResourceRequestProtoOrBuilder;
import org.apache.hadoop.yarn.server.api.protocolrecords.UpdateNodeResourceRequest;
public class UpdateNodeResourceRequestPBImpl extends UpdateNodeResourceRequest
