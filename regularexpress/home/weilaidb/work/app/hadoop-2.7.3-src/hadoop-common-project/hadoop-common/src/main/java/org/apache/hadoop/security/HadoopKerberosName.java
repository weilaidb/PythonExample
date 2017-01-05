package org.apache.hadoop.security;
import static org.apache.hadoop.fs.CommonConfigurationKeysPublic.HADOOP_SECURITY_AUTH_TO_LOCAL;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.security.authentication.util.KerberosName;
import org.apache.hadoop.security.authentication.util.KerberosUtil;
@SuppressWarnings("all")
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Evolving
public class HadoopKerberosName extends KerberosName
