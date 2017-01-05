package org.apache.hadoop.ha;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.io.retry.Idempotent;
import org.apache.hadoop.security.AccessControlException;
import org.apache.hadoop.security.KerberosInfo;
import java.io.IOException;
@KerberosInfo(
serverPrincipal=CommonConfigurationKeys.HADOOP_SECURITY_SERVICE_USER_NAME_KEY)
@InterfaceAudience.Private
@InterfaceStability.Evolving
public interface ZKFCProtocol
