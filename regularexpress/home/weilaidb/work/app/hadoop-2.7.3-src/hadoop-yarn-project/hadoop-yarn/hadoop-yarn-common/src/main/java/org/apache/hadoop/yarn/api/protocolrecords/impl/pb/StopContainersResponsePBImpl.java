package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.protocolrecords.StopContainersResponse;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.api.records.SerializedException;
import org.apache.hadoop.yarn.api.records.impl.pb.ContainerIdPBImpl;
import org.apache.hadoop.yarn.api.records.impl.pb.SerializedExceptionPBImpl;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerIdProto;
import org.apache.hadoop.yarn.proto.YarnProtos.SerializedExceptionProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.ContainerExceptionMapProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.StopContainersResponseProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.StopContainersResponseProtoOrBuilder;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class StopContainersResponsePBImpl extends StopContainersResponse
