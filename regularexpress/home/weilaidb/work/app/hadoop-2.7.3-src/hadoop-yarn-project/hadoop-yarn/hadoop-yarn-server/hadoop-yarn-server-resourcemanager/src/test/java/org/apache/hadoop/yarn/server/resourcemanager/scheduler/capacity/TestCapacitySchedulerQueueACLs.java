package org.apache.hadoop.yarn.server.resourcemanager.scheduler.capacity;
import java.util.HashMap;
import java.util.Map;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.security.authorize.AccessControlList;
import org.apache.hadoop.yarn.api.records.QueueACL;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.hadoop.yarn.server.resourcemanager.QueueACLsTestBase;
public class TestCapacitySchedulerQueueACLs extends QueueACLsTestBase
