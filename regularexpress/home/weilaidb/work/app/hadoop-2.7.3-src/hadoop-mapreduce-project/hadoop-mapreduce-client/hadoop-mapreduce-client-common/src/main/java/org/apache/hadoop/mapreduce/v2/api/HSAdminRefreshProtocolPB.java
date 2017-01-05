package org.apache.hadoop.mapreduce.v2.api;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.ipc.ProtocolInfo;
import org.apache.hadoop.mapreduce.v2.hs.proto.HSAdminRefreshProtocolProtos.HSAdminRefreshProtocolService;
import org.apache.hadoop.security.KerberosInfo;
@KerberosInfo(serverPrincipal = CommonConfigurationKeys.HADOOP_SECURITY_SERVICE_USER_NAME_KEY)
@ProtocolInfo(protocolName = "org.apache.hadoop.mapreduce.v2.api.HSAdminRefreshProtocol", protocolVersion = 1)
@Private
@InterfaceStability.Evolving
public interface HSAdminRefreshProtocolPB extends
HSAdminRefreshProtocolService.BlockingInterface
