package org.apache.hadoop.yarn.client;
import java.io.IOException;
import java.io.PrintStream;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.service.Service.STATE;
import org.apache.hadoop.tools.GetGroupsTestBase;
import org.apache.hadoop.util.Tool;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.hadoop.yarn.server.resourcemanager.ResourceManager;
import org.junit.AfterClass;
import org.junit.Before;
import org.junit.BeforeClass;
public class TestGetGroups extends GetGroupsTestBase
