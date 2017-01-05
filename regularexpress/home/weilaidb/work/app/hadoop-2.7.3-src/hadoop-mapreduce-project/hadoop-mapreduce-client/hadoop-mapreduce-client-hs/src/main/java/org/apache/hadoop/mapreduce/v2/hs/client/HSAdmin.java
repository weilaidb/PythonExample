package org.apache.hadoop.mapreduce.v2.hs.client;
import java.io.IOException;
import java.net.InetSocketAddress;
import java.util.Arrays;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.conf.Configured;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.mapreduce.v2.api.HSAdminRefreshProtocol;
import org.apache.hadoop.mapreduce.v2.hs.HSProxies;
import org.apache.hadoop.mapreduce.v2.jobhistory.JHAdminConfig;
import org.apache.hadoop.security.RefreshUserMappingsProtocol;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.tools.GetUserMappingsProtocol;
import org.apache.hadoop.util.Tool;
import org.apache.hadoop.util.ToolRunner;
@Private
public class HSAdmin extends Configured implements Tool
