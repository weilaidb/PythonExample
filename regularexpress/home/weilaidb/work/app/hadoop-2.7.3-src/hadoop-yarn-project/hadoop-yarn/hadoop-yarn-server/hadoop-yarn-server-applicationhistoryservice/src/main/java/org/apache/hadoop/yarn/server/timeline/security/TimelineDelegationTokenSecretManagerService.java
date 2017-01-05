package org.apache.hadoop.yarn.server.timeline.security;
import java.io.IOException;
import java.util.Map.Entry;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.security.token.delegation.AbstractDelegationTokenSecretManager;
import org.apache.hadoop.security.token.delegation.DelegationKey;
import org.apache.hadoop.service.AbstractService;
import org.apache.hadoop.util.ReflectionUtils;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.hadoop.yarn.security.client.TimelineDelegationTokenIdentifier;
import org.apache.hadoop.yarn.server.timeline.recovery.LeveldbTimelineStateStore;
import org.apache.hadoop.yarn.server.timeline.recovery.TimelineStateStore;
import org.apache.hadoop.yarn.server.timeline.recovery.TimelineStateStore.TimelineServiceState;
@Private
@Unstable
public class TimelineDelegationTokenSecretManagerService extends
AbstractService
