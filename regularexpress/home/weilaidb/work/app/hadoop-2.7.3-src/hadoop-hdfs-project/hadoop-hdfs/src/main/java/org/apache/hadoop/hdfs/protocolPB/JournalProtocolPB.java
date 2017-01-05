package org.apache.hadoop.hdfs.protocolPB;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.protocol.proto.JournalProtocolProtos.JournalProtocolService;
import org.apache.hadoop.ipc.ProtocolInfo;
import org.apache.hadoop.security.KerberosInfo;
@KerberosInfo(
serverPrincipal = DFSConfigKeys.DFS_NAMENODE_KERBEROS_PRINCIPAL_KEY,
clientPrincipal = DFSConfigKeys.DFS_NAMENODE_KERBEROS_PRINCIPAL_KEY)
@ProtocolInfo(protocolName =
"org.apache.hadoop.hdfs.server.protocol.JournalProtocol",
protocolVersion = 1)
@InterfaceAudience.Private
public interface JournalProtocolPB extends
JournalProtocolService.BlockingInterface
