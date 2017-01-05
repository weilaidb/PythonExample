package org.apache.hadoop.tracing;
import org.apache.hadoop.ipc.VersionedProtocol;
import org.apache.hadoop.tracing.TraceAdminPB.TraceAdminService;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.ipc.ProtocolInfo;
import org.apache.hadoop.security.KerberosInfo;
@KerberosInfo(
serverPrincipal=CommonConfigurationKeys.HADOOP_SECURITY_SERVICE_USER_NAME_KEY)
@ProtocolInfo(
protocolName = "org.apache.hadoop.tracing.TraceAdminPB.TraceAdminService",
protocolVersion = 1)
@InterfaceAudience.Public
@InterfaceStability.Evolving
public interface TraceAdminProtocolPB extends
TraceAdminService.BlockingInterface, VersionedProtocol
