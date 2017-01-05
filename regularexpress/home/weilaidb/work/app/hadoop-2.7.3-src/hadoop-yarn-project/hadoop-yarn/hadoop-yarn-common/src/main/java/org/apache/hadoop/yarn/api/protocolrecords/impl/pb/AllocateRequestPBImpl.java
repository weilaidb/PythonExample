package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.protocolrecords.AllocateRequest;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.api.records.ContainerResourceIncreaseRequest;
import org.apache.hadoop.yarn.api.records.ResourceBlacklistRequest;
import org.apache.hadoop.yarn.api.records.ResourceRequest;
import org.apache.hadoop.yarn.api.records.impl.pb.ContainerIdPBImpl;
import org.apache.hadoop.yarn.api.records.impl.pb.ContainerResourceIncreaseRequestPBImpl;
import org.apache.hadoop.yarn.api.records.impl.pb.ResourceBlacklistRequestPBImpl;
import org.apache.hadoop.yarn.api.records.impl.pb.ResourceRequestPBImpl;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerIdProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerResourceIncreaseRequestProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ResourceBlacklistRequestProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ResourceRequestProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.AllocateRequestProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.AllocateRequestProtoOrBuilder;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class AllocateRequestPBImpl extends AllocateRequest
