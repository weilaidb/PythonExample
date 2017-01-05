package org.apache.hadoop.hdfs.server.protocol;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.ha.HAServiceProtocol;
import org.apache.hadoop.hdfs.protocol.ClientProtocol;
import org.apache.hadoop.security.authorize.RefreshAuthorizationPolicyProtocol;
import org.apache.hadoop.security.RefreshUserMappingsProtocol;
import org.apache.hadoop.ipc.RefreshCallQueueProtocol;
import org.apache.hadoop.ipc.GenericRefreshProtocol;
import org.apache.hadoop.tools.GetUserMappingsProtocol;
import org.apache.hadoop.tracing.TraceAdminProtocol;
@InterfaceAudience.Private
public interface NamenodeProtocols
extends ClientProtocol,
DatanodeProtocol,
NamenodeProtocol,
RefreshAuthorizationPolicyProtocol,
RefreshUserMappingsProtocol,
RefreshCallQueueProtocol,
GenericRefreshProtocol,
GetUserMappingsProtocol,
HAServiceProtocol,
TraceAdminProtocol
