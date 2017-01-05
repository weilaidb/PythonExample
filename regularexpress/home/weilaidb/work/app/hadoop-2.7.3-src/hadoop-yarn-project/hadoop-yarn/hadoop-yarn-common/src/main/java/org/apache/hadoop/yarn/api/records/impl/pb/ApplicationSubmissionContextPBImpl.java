package org.apache.hadoop.yarn.api.records.impl.pb;
import java.util.HashSet;
import java.util.Set;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.util.StringUtils;
import org.apache.hadoop.yarn.api.records.ApplicationId;
import org.apache.hadoop.yarn.api.records.ApplicationSubmissionContext;
import org.apache.hadoop.yarn.api.records.ContainerLaunchContext;
import org.apache.hadoop.yarn.api.records.LogAggregationContext;
import org.apache.hadoop.yarn.api.records.Priority;
import org.apache.hadoop.yarn.api.records.ReservationId;
import org.apache.hadoop.yarn.api.records.Resource;
import org.apache.hadoop.yarn.api.records.ResourceRequest;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.hadoop.yarn.proto.YarnProtos.ApplicationIdProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ApplicationSubmissionContextProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ApplicationSubmissionContextProtoOrBuilder;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerLaunchContextProto;
import org.apache.hadoop.yarn.proto.YarnProtos.LogAggregationContextProto;
import org.apache.hadoop.yarn.proto.YarnProtos.PriorityProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ReservationIdProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ResourceProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ResourceRequestProto;
import com.google.common.base.CharMatcher;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class ApplicationSubmissionContextPBImpl
extends ApplicationSubmissionContext
