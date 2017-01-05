package org.apache.hadoop.yarn.server.nodemanager.containermanager.localizer.security;
import java.lang.annotation.Annotation;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.security.KerberosInfo;
import org.apache.hadoop.security.SecurityInfo;
import org.apache.hadoop.security.token.TokenIdentifier;
import org.apache.hadoop.security.token.TokenInfo;
import org.apache.hadoop.security.token.TokenSelector;
import org.apache.hadoop.yarn.server.nodemanager.api.LocalizationProtocolPB;
public class LocalizerSecurityInfo extends SecurityInfo
