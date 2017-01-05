package org.apache.hadoop.yarn.server.timeline;
import java.io.IOException;
import java.util.Collection;
import java.util.EnumSet;
import java.util.Set;
import java.util.SortedSet;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.yarn.api.records.timeline.TimelineEntities;
import org.apache.hadoop.yarn.api.records.timeline.TimelineEntity;
import org.apache.hadoop.yarn.api.records.timeline.TimelineEvents;
import org.apache.hadoop.yarn.api.records.timeline.TimelineDomain;
import org.apache.hadoop.yarn.api.records.timeline.TimelineDomains;
import org.apache.hadoop.yarn.server.timeline.TimelineDataManager.CheckAcl;
@InterfaceAudience.Private
@InterfaceStability.Unstable
public interface TimelineReader
