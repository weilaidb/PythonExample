package org.apache.hadoop.mapreduce.v2.security.client;
import java.lang.annotation.Annotation;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.mapreduce.v2.api.HSClientProtocolPB;
import org.apache.hadoop.mapreduce.v2.jobhistory.JHAdminConfig;
import org.apache.hadoop.security.KerberosInfo;
import org.apache.hadoop.security.SecurityInfo;
import org.apache.hadoop.security.token.TokenIdentifier;
import org.apache.hadoop.security.token.TokenInfo;
import org.apache.hadoop.security.token.TokenSelector;
public class ClientHSSecurityInfo extends SecurityInfo
