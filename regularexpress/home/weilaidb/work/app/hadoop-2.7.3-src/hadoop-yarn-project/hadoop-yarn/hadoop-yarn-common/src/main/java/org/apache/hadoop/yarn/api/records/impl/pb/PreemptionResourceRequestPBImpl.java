package org.apache.hadoop.yarn.api.records.impl.pb;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.records.PreemptionResourceRequest;
import org.apache.hadoop.yarn.api.records.ResourceRequest;
import org.apache.hadoop.yarn.proto.YarnProtos.PreemptionResourceRequestProto;
import org.apache.hadoop.yarn.proto.YarnProtos.PreemptionResourceRequestProtoOrBuilder;
import org.apache.hadoop.yarn.proto.YarnProtos.ResourceRequestProto;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class PreemptionResourceRequestPBImpl extends PreemptionResourceRequest
