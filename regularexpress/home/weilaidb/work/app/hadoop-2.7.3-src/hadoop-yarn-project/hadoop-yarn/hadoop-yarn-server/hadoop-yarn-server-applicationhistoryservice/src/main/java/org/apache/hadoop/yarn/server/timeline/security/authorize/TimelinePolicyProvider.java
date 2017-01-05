package org.apache.hadoop.yarn.server.timeline.security.authorize;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.security.authorize.PolicyProvider;
import org.apache.hadoop.security.authorize.Service;
import org.apache.hadoop.yarn.api.ApplicationHistoryProtocolPB;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public class TimelinePolicyProvider extends PolicyProvider
