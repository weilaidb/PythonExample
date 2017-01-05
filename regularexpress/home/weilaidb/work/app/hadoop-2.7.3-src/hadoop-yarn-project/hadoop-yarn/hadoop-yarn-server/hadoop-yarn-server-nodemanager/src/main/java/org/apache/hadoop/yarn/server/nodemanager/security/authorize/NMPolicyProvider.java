package org.apache.hadoop.yarn.server.nodemanager.security.authorize;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.security.authorize.PolicyProvider;
import org.apache.hadoop.security.authorize.Service;
import org.apache.hadoop.yarn.api.ContainerManagementProtocolPB;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.hadoop.yarn.server.nodemanager.api.LocalizationProtocolPB;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class NMPolicyProvider extends PolicyProvider
