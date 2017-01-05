package org.apache.hadoop.ha.protocolPB;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.ha.proto.ZKFCProtocolProtos.ZKFCProtocolService;
import org.apache.hadoop.ipc.ProtocolInfo;
import org.apache.hadoop.ipc.VersionedProtocol;
import org.apache.hadoop.security.KerberosInfo;
@KerberosInfo(
serverPrincipal=CommonConfigurationKeys.HADOOP_SECURITY_SERVICE_USER_NAME_KEY)
@ProtocolInfo(protocolName = "org.apache.hadoop.ha.ZKFCProtocol",
protocolVersion = 1)
@InterfaceAudience.Public
@InterfaceStability.Evolving
public interface ZKFCProtocolPB extends
ZKFCProtocolService.BlockingInterface, VersionedProtocol
