package org.apache.hadoop.mapreduce.v2.app.security.authorize;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.mapreduce.v2.api.HSAdminRefreshProtocol;
import org.apache.hadoop.mapreduce.v2.api.HSClientProtocolPB;
import org.apache.hadoop.mapreduce.v2.jobhistory.JHAdminConfig;
import org.apache.hadoop.security.RefreshUserMappingsProtocol;
import org.apache.hadoop.security.authorize.PolicyProvider;
import org.apache.hadoop.security.authorize.Service;
import org.apache.hadoop.tools.GetUserMappingsProtocol;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class ClientHSPolicyProvider extends PolicyProvider
