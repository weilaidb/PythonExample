package org.apache.hadoop.yarn.server.timeline.security;
import javax.servlet.FilterConfig;
import javax.servlet.ServletException;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.security.token.delegation.web.DelegationTokenAuthenticationFilter;
import org.apache.hadoop.yarn.server.timeline.security.TimelineDelegationTokenSecretManagerService.TimelineDelegationTokenSecretManager;
@Private
@Unstable
public class TimelineAuthenticationFilter
extends DelegationTokenAuthenticationFilter
