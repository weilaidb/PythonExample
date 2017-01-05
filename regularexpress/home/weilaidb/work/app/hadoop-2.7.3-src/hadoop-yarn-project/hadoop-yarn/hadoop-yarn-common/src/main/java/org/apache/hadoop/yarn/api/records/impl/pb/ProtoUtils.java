package org.apache.hadoop.yarn.api.records.impl.pb;
import java.nio.ByteBuffer;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.protocolrecords.ApplicationsRequestScope;
import org.apache.hadoop.yarn.api.records.AMCommand;
import org.apache.hadoop.yarn.api.records.ApplicationAccessType;
import org.apache.hadoop.yarn.api.records.ApplicationResourceUsageReport;
import org.apache.hadoop.yarn.api.records.ContainerState;
import org.apache.hadoop.yarn.api.records.FinalApplicationStatus;
import org.apache.hadoop.yarn.api.records.LocalResourceType;
import org.apache.hadoop.yarn.api.records.LocalResourceVisibility;
import org.apache.hadoop.yarn.api.records.NodeId;
import org.apache.hadoop.yarn.api.records.NodeState;
import org.apache.hadoop.yarn.api.records.QueueACL;
import org.apache.hadoop.yarn.api.records.QueueState;
import org.apache.hadoop.yarn.api.records.ReservationRequestInterpreter;
import org.apache.hadoop.yarn.api.records.YarnApplicationAttemptState;
import org.apache.hadoop.yarn.api.records.YarnApplicationState;
import org.apache.hadoop.yarn.proto.YarnProtos.AMCommandProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ApplicationAccessTypeProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ApplicationResourceUsageReportProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerStateProto;
import org.apache.hadoop.yarn.proto.YarnProtos.FinalApplicationStatusProto;
import org.apache.hadoop.yarn.proto.YarnProtos.LocalResourceTypeProto;
import org.apache.hadoop.yarn.proto.YarnProtos.LocalResourceVisibilityProto;
import org.apache.hadoop.yarn.proto.YarnProtos.NodeIdProto;
import org.apache.hadoop.yarn.proto.YarnProtos.NodeStateProto;
import org.apache.hadoop.yarn.proto.YarnProtos.QueueACLProto;
import org.apache.hadoop.yarn.proto.YarnProtos.QueueStateProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ReservationRequestInterpreterProto;
import org.apache.hadoop.yarn.proto.YarnProtos.YarnApplicationAttemptStateProto;
import org.apache.hadoop.yarn.proto.YarnProtos.YarnApplicationStateProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos;
import com.google.protobuf.ByteString;
@Private
@Unstable
public class ProtoUtils
