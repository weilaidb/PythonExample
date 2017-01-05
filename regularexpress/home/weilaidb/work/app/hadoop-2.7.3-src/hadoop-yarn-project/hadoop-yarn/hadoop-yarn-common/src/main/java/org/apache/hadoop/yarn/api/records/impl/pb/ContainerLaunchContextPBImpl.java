package org.apache.hadoop.yarn.api.records.impl.pb;
import java.nio.ByteBuffer;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.records.ApplicationAccessType;
import org.apache.hadoop.yarn.api.records.ContainerLaunchContext;
import org.apache.hadoop.yarn.api.records.LocalResource;
import org.apache.hadoop.yarn.proto.YarnProtos.ApplicationACLMapProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerLaunchContextProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerLaunchContextProtoOrBuilder;
import org.apache.hadoop.yarn.proto.YarnProtos.LocalResourceProto;
import org.apache.hadoop.yarn.proto.YarnProtos.StringBytesMapProto;
import org.apache.hadoop.yarn.proto.YarnProtos.StringLocalResourceMapProto;
import org.apache.hadoop.yarn.proto.YarnProtos.StringStringMapProto;
import com.google.protobuf.ByteString;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class ContainerLaunchContextPBImpl
extends ContainerLaunchContext
