package org.apache.hadoop.mapreduce.v2.api;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.security.KerberosInfo;
import org.apache.hadoop.security.RefreshUserMappingsProtocol;
import org.apache.hadoop.tools.GetUserMappingsProtocol;
@KerberosInfo(serverPrincipal = CommonConfigurationKeys.HADOOP_SECURITY_SERVICE_USER_NAME_KEY)
@Private
@InterfaceStability.Evolving
public interface HSAdminProtocol extends GetUserMappingsProtocol,
RefreshUserMappingsProtocol, HSAdminRefreshProtocol
