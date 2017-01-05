package org.apache.hadoop.yarn.api.protocolrecords.impl.pb;
import java.util.EnumSet;
import java.util.HashSet;
import java.util.List;
import java.util.Set;
import org.apache.commons.lang.math.LongRange;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.util.StringUtils;
import org.apache.hadoop.yarn.api.protocolrecords.ApplicationsRequestScope;
import org.apache.hadoop.yarn.api.protocolrecords.GetApplicationsRequest;
import org.apache.hadoop.yarn.api.records.YarnApplicationState;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoUtils;
import org.apache.hadoop.yarn.proto.YarnProtos.YarnApplicationStateProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetApplicationsRequestProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.GetApplicationsRequestProtoOrBuilder;
import com.google.common.base.Function;
import com.google.common.collect.Iterables;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class GetApplicationsRequestPBImpl extends GetApplicationsRequest
