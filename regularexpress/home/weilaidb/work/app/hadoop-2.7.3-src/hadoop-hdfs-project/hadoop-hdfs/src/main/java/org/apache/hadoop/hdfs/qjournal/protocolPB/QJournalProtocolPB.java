package org.apache.hadoop.hdfs.qjournal.protocolPB;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.qjournal.protocol.QJournalProtocolProtos.QJournalProtocolService;
import org.apache.hadoop.ipc.ProtocolInfo;
import org.apache.hadoop.security.KerberosInfo;
@KerberosInfo(
serverPrincipal = DFSConfigKeys.DFS_JOURNALNODE_KERBEROS_PRINCIPAL_KEY,
clientPrincipal = DFSConfigKeys.DFS_NAMENODE_KERBEROS_PRINCIPAL_KEY)
@ProtocolInfo(protocolName =
"org.apache.hadoop.hdfs.qjournal.protocol.QJournalProtocol",
protocolVersion = 1)
@InterfaceAudience.Private
public interface QJournalProtocolPB extends
QJournalProtocolService.BlockingInterface
