package org.apache.hadoop.yarn.api.records.impl.pb;
import java.util.ArrayList;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.records.ResourceBlacklistRequest;
import org.apache.hadoop.yarn.proto.YarnProtos.ResourceBlacklistRequestProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ResourceBlacklistRequestProtoOrBuilder;
@Private
@Unstable
public class ResourceBlacklistRequestPBImpl extends ResourceBlacklistRequest
