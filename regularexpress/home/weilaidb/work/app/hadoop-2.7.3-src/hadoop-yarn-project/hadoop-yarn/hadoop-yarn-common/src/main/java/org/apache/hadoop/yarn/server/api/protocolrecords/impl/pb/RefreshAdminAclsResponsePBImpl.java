package org.apache.hadoop.yarn.server.api.protocolrecords.impl.pb;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.proto.YarnServerResourceManagerServiceProtos.RefreshAdminAclsResponseProto;
import org.apache.hadoop.yarn.server.api.protocolrecords.RefreshAdminAclsResponse;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class RefreshAdminAclsResponsePBImpl extends RefreshAdminAclsResponse
