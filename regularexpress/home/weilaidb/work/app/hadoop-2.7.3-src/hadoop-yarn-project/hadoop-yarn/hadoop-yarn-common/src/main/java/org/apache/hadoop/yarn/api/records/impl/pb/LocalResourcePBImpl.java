package org.apache.hadoop.yarn.api.records.impl.pb;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.records.LocalResource;
import org.apache.hadoop.yarn.api.records.LocalResourceType;
import org.apache.hadoop.yarn.api.records.LocalResourceVisibility;
import org.apache.hadoop.yarn.api.records.URL;
import org.apache.hadoop.yarn.proto.YarnProtos.LocalResourceProto;
import org.apache.hadoop.yarn.proto.YarnProtos.LocalResourceProtoOrBuilder;
import org.apache.hadoop.yarn.proto.YarnProtos.LocalResourceTypeProto;
import org.apache.hadoop.yarn.proto.YarnProtos.LocalResourceVisibilityProto;
import org.apache.hadoop.yarn.proto.YarnProtos.URLProto;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class LocalResourcePBImpl extends LocalResource
