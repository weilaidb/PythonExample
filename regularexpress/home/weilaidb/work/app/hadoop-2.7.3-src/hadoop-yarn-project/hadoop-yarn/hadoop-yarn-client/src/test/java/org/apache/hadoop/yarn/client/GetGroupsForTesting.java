package org.apache.hadoop.yarn.client;
import java.io.IOException;
import java.io.PrintStream;
import java.net.InetSocketAddress;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.tools.GetGroupsBase;
import org.apache.hadoop.tools.GetUserMappingsProtocol;
import org.apache.hadoop.util.ToolRunner;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.hadoop.yarn.ipc.YarnRPC;
import org.apache.hadoop.yarn.server.api.ResourceManagerAdministrationProtocol;
public class GetGroupsForTesting extends GetGroupsBase
