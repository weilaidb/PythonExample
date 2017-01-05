package org.apache.hadoop.yarn.server.api.protocolrecords.impl.pb;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.proto.YarnServerResourceManagerServiceProtos.RefreshSuperUserGroupsConfigurationRequestProto;
import org.apache.hadoop.yarn.server.api.protocolrecords.RefreshSuperUserGroupsConfigurationRequest;
import com.google.protobuf.TextFormat;
@Private
@Unstable
public class RefreshSuperUserGroupsConfigurationRequestPBImpl
extends RefreshSuperUserGroupsConfigurationRequest
