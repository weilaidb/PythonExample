package org.apache.hadoop.mapreduce.v2.app;
import java.lang.annotation.Annotation;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.mapreduce.v2.api.MRClientProtocolPB;
import org.apache.hadoop.security.KerberosInfo;
import org.apache.hadoop.security.SecurityInfo;
import org.apache.hadoop.security.token.TokenIdentifier;
import org.apache.hadoop.security.token.TokenInfo;
import org.apache.hadoop.security.token.TokenSelector;
import org.apache.hadoop.yarn.security.client.ClientToAMTokenSelector;
public class MRClientSecurityInfo extends SecurityInfo
