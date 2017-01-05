package org.apache.hadoop.yarn.server.resourcemanager.monitor;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.hadoop.yarn.server.resourcemanager.ResourceManager;
import org.apache.hadoop.yarn.server.resourcemanager.monitor.capacity.ProportionalCapacityPreemptionPolicy;
import org.junit.Test;
import static org.junit.Assert.fail;
public class TestSchedulingMonitor
