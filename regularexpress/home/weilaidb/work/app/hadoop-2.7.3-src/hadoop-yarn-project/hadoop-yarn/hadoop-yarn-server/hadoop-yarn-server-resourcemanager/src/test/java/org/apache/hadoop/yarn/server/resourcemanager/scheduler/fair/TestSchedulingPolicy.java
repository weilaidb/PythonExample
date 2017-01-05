package org.apache.hadoop.yarn.server.resourcemanager.scheduler.fair;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;
import org.apache.hadoop.yarn.server.resourcemanager.scheduler.fair.policies.DominantResourceFairnessPolicy;
import org.apache.hadoop.yarn.server.resourcemanager.scheduler.fair.policies.FairSharePolicy;
import org.apache.hadoop.yarn.server.resourcemanager.scheduler.fair.policies.FifoPolicy;
import org.junit.Test;
import org.mockito.Mockito;
public class TestSchedulingPolicy
