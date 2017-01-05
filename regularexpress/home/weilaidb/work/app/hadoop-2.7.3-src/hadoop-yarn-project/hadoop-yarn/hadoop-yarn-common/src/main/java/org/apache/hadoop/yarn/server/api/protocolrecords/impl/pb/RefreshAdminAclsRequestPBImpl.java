package org.apache.hadoop.yarn.server.api.protocolrecords.impl.pb;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.proto.YarnServerResourceManagerServiceProtos.RefreshAdminAclsRequestProto;
import org.apache.hadoop.yarn.server.api.protocolrecords.RefreshAdminAclsRequest;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class RefreshAdminAclsRequestPBImpl
extends RefreshAdminAclsRequest
