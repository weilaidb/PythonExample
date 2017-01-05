package org.apache.hadoop.yarn.server.resourcemanager.scheduler.fair.policies;
import java.util.Collection;
import java.util.Comparator;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.yarn.api.records.Resource;
import org.apache.hadoop.yarn.server.resourcemanager.resource.ResourceType;
import org.apache.hadoop.yarn.server.resourcemanager.resource.ResourceWeights;
import org.apache.hadoop.yarn.server.resourcemanager.scheduler.fair.FSQueue;
import org.apache.hadoop.yarn.server.resourcemanager.scheduler.fair.Schedulable;
import org.apache.hadoop.yarn.server.resourcemanager.scheduler.fair.SchedulingPolicy;
import org.apache.hadoop.yarn.util.resource.Resources;
import static org.apache.hadoop.yarn.server.resourcemanager.resource.ResourceType.*;
@Private
@Unstable
public class DominantResourceFairnessPolicy extends SchedulingPolicy
