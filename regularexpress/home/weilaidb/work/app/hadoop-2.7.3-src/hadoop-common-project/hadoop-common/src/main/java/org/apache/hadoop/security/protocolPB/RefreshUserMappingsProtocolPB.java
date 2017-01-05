package org.apache.hadoop.security.protocolPB;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.ipc.ProtocolInfo;
import org.apache.hadoop.security.KerberosInfo;
import org.apache.hadoop.security.proto.RefreshUserMappingsProtocolProtos.RefreshUserMappingsProtocolService;
@KerberosInfo(
serverPrincipal=CommonConfigurationKeys.HADOOP_SECURITY_SERVICE_USER_NAME_KEY)
@ProtocolInfo(
protocolName = "org.apache.hadoop.security.RefreshUserMappingsProtocol",
protocolVersion = 1)
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Evolving
public interface RefreshUserMappingsProtocolPB extends
RefreshUserMappingsProtocolService.BlockingInterface
