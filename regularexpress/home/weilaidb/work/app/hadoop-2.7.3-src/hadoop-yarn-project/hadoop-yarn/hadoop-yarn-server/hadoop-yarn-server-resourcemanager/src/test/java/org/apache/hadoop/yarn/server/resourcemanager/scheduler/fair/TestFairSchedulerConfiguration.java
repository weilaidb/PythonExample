package org.apache.hadoop.yarn.server.resourcemanager.scheduler.fair;
import static org.apache.hadoop.yarn.server.resourcemanager.scheduler.fair.FairSchedulerConfiguration.parseResourceConfigValue;
import static org.junit.Assert.assertEquals;
import java.io.File;
import org.junit.Assert;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.yarn.server.utils.BuilderUtils;
import org.junit.Test;
public class TestFairSchedulerConfiguration
