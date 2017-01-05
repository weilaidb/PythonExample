package org.apache.hadoop.yarn.server.resourcemanager.scheduler.fair;
import java.util.ArrayList;
import java.util.List;
import org.junit.Assert;
import org.apache.hadoop.yarn.util.resource.Resources;
import org.apache.hadoop.yarn.server.resourcemanager.resource.ResourceType;
import org.apache.hadoop.yarn.server.resourcemanager.resource.ResourceWeights;
import org.apache.hadoop.yarn.server.resourcemanager.scheduler.fair.policies.ComputeFairShares;
import org.junit.Before;
import org.junit.Test;
public class TestComputeFairShares
