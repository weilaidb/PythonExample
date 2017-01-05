package org.apache.hadoop.yarn.api.records.impl.pb;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.records.PreemptionContract;
import org.apache.hadoop.yarn.api.records.PreemptionMessage;
import org.apache.hadoop.yarn.api.records.StrictPreemptionContract;
import org.apache.hadoop.yarn.proto.YarnProtos.PreemptionContractProto;
import org.apache.hadoop.yarn.proto.YarnProtos.PreemptionMessageProto;
import org.apache.hadoop.yarn.proto.YarnProtos.PreemptionMessageProtoOrBuilder;
import org.apache.hadoop.yarn.proto.YarnProtos.StrictPreemptionContractProto;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class PreemptionMessagePBImpl extends PreemptionMessage
