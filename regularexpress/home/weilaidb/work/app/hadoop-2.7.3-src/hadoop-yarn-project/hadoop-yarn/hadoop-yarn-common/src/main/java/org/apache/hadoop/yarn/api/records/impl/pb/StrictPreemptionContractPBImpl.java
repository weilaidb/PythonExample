package org.apache.hadoop.yarn.api.records.impl.pb;
import java.util.HashSet;
import java.util.Iterator;
import java.util.List;
import java.util.Set;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.records.PreemptionContainer;
import org.apache.hadoop.yarn.api.records.StrictPreemptionContract;
import org.apache.hadoop.yarn.proto.YarnProtos.PreemptionContainerProto;
import org.apache.hadoop.yarn.proto.YarnProtos.StrictPreemptionContractProto;
import org.apache.hadoop.yarn.proto.YarnProtos.StrictPreemptionContractProtoOrBuilder;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class StrictPreemptionContractPBImpl extends StrictPreemptionContract
