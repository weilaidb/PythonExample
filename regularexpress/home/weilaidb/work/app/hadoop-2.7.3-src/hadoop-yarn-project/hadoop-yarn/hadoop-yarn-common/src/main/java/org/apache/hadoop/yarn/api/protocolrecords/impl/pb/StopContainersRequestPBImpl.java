package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import java.util.ArrayList;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.protocolrecords.StopContainersRequest;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.api.records.impl.pb.ContainerIdPBImpl;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerIdProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.StopContainersRequestProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.StopContainersRequestProtoOrBuilder;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class StopContainersRequestPBImpl extends StopContainersRequest
