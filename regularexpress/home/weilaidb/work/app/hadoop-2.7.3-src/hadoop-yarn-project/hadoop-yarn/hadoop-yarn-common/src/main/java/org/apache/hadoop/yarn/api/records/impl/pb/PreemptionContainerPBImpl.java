package org.apache.hadoop.yarn.api.records.impl.pb;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.api.records.PreemptionContainer;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerIdProto;
import org.apache.hadoop.yarn.proto.YarnProtos.PreemptionContainerProto;
import org.apache.hadoop.yarn.proto.YarnProtos.PreemptionContainerProtoOrBuilder;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class PreemptionContainerPBImpl extends PreemptionContainer
