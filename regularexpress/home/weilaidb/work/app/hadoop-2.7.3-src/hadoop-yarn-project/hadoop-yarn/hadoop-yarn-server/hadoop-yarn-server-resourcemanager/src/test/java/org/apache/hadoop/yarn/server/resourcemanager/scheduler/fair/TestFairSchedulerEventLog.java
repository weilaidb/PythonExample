package org.apache.hadoop.yarn.server.resourcemanager.scheduler.fair;
import java.io.File;
import java.io.IOException;
import org.junit.Assert;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.hadoop.yarn.event.AsyncDispatcher;
import org.apache.hadoop.yarn.server.resourcemanager.ResourceManager;
import org.apache.hadoop.yarn.server.resourcemanager.scheduler.ResourceScheduler;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;
public class TestFairSchedulerEventLog
