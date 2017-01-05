package org.apache.hadoop.hdfs.protocol;
import java.io.IOException;
import java.util.List;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.ReconfigurationTaskStatus;
import org.apache.hadoop.hdfs.client.BlockReportOptions;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.security.token.block.BlockTokenIdentifier;
import org.apache.hadoop.hdfs.security.token.block.BlockTokenSelector;
import org.apache.hadoop.security.KerberosInfo;
import org.apache.hadoop.security.token.Token;
import org.apache.hadoop.security.token.TokenInfo;
@InterfaceAudience.Private
@InterfaceStability.Evolving
@KerberosInfo(
serverPrincipal = DFSConfigKeys.DFS_DATANODE_KERBEROS_PRINCIPAL_KEY)
@TokenInfo(BlockTokenSelector.class)
public interface ClientDatanodeProtocol
