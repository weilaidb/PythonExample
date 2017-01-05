package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import java.nio.ByteBuffer;
import java.util.*;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.protocolrecords.RegisterApplicationMasterResponse;
import org.apache.hadoop.yarn.api.records.ApplicationAccessType;
import org.apache.hadoop.yarn.api.records.Container;
import org.apache.hadoop.yarn.api.records.NMToken;
import org.apache.hadoop.yarn.api.records.Resource;
import org.apache.hadoop.yarn.api.records.impl.pb.ContainerPBImpl;
import org.apache.hadoop.yarn.api.records.impl.pb.NMTokenPBImpl;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoUtils;
import org.apache.hadoop.yarn.api.records.impl.pb.ResourcePBImpl;
import org.apache.hadoop.yarn.proto.YarnProtos.ApplicationACLMapProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ResourceProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.NMTokenProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.RegisterApplicationMasterResponseProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.RegisterApplicationMasterResponseProtoOrBuilder;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.SchedulerResourceTypes;
import com.google.protobuf.ByteString;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class RegisterApplicationMasterResponsePBImpl extends
RegisterApplicationMasterResponse
