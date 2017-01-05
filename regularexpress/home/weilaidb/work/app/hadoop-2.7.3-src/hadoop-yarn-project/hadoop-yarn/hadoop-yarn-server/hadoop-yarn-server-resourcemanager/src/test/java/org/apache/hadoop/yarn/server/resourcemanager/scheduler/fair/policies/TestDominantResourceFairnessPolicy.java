package org.apache.hadoop.yarn.server.resourcemanager.scheduler.fair.policies;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertTrue;
import java.util.Comparator;
import org.apache.hadoop.yarn.api.records.Resource;
import org.apache.hadoop.yarn.server.resourcemanager.resource.ResourceType;
import org.apache.hadoop.yarn.server.resourcemanager.resource.ResourceWeights;
import org.apache.hadoop.yarn.server.resourcemanager.scheduler.fair.FakeSchedulable;
import org.apache.hadoop.yarn.server.resourcemanager.scheduler.fair.Schedulable;
import org.apache.hadoop.yarn.server.utils.BuilderUtils;
import org.apache.hadoop.yarn.util.resource.Resources;
import org.junit.Test;
public class TestDominantResourceFairnessPolicy
