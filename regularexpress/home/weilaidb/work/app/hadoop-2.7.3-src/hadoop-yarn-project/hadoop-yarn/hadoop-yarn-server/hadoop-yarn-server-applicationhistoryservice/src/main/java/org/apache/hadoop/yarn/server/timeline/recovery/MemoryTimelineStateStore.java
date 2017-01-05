package org.apache.hadoop.yarn.server.timeline.recovery;
import java.io.IOException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.security.token.delegation.DelegationKey;
import org.apache.hadoop.yarn.security.client.TimelineDelegationTokenIdentifier;
public class MemoryTimelineStateStore
extends TimelineStateStore
