package org.apache.hadoop.yarn.security.client;
import java.lang.annotation.Annotation;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.security.KerberosInfo;
import org.apache.hadoop.security.SecurityInfo;
import org.apache.hadoop.security.token.TokenIdentifier;
import org.apache.hadoop.security.token.TokenInfo;
import org.apache.hadoop.security.token.TokenSelector;
import org.apache.hadoop.yarn.api.ApplicationHistoryProtocolPB;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
@Public
@Unstable
public class ClientTimelineSecurityInfo extends SecurityInfo
