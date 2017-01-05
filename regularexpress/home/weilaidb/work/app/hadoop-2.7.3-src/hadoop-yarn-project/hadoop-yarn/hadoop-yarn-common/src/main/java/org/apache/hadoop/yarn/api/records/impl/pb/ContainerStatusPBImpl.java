package org.apache.hadoop.yarn.api.records.impl.pb;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.api.records.ContainerState;
import org.apache.hadoop.yarn.api.records.ContainerStatus;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerIdProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerStateProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerStatusProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerStatusProtoOrBuilder;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class ContainerStatusPBImpl extends ContainerStatus
