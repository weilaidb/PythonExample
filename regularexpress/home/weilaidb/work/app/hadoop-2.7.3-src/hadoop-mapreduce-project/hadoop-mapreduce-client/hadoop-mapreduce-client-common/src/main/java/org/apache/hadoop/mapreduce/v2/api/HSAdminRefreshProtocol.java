package org.apache.hadoop.mapreduce.v2.api;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.security.KerberosInfo;
@KerberosInfo(serverPrincipal = CommonConfigurationKeys.HADOOP_SECURITY_SERVICE_USER_NAME_KEY)
@Private
@InterfaceStability.Evolving
public interface HSAdminRefreshProtocol
