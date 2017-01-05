package org.apache.hadoop.hdfs.server.namenode;
import java.net.InetAddress;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.hdfs.security.token.delegation.DelegationTokenSecretManager;
import org.apache.hadoop.security.UserGroupInformation;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public abstract class HdfsAuditLogger implements AuditLogger
