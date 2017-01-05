package org.apache.hadoop.yarn.server.timeline.recovery;
import java.io.IOException;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.security.token.delegation.DelegationKey;
import org.apache.hadoop.service.AbstractService;
import org.apache.hadoop.yarn.security.client.TimelineDelegationTokenIdentifier;
@Private
@Unstable
public abstract class TimelineStateStore extends AbstractService
