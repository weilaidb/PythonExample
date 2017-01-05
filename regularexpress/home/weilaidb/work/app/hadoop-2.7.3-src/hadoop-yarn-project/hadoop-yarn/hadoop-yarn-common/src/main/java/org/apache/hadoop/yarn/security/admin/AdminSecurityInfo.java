package org.apache.hadoop.yarn.security.admin;
import java.lang.annotation.Annotation;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Stable;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.security.KerberosInfo;
import org.apache.hadoop.security.SecurityInfo;
import org.apache.hadoop.security.token.TokenInfo;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.hadoop.yarn.server.api.ResourceManagerAdministrationProtocolPB;
@Public
@Stable
public class AdminSecurityInfo extends SecurityInfo
