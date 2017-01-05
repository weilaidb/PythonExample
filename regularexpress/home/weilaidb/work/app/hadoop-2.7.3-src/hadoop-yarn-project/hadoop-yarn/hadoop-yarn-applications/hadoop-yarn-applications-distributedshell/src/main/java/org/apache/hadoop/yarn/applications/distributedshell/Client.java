package org.apache.hadoop.yarn.applications.distributedshell;
import java.io.IOException;
import java.nio.ByteBuffer;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Vector;
import org.apache.commons.cli.CommandLine;
import org.apache.commons.cli.GnuParser;
import org.apache.commons.cli.HelpFormatter;
import org.apache.commons.cli.Option;
import org.apache.commons.cli.Options;
import org.apache.commons.cli.ParseException;
import org.apache.commons.io.IOUtils;
import org.apache.commons.lang.StringUtils;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FSDataOutputStream;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.io.DataOutputBuffer;
import org.apache.hadoop.security.Credentials;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.security.token.Token;
import org.apache.hadoop.yarn.api.ApplicationClientProtocol;
import org.apache.hadoop.yarn.api.ApplicationConstants;
import org.apache.hadoop.yarn.api.ApplicationConstants.Environment;
import org.apache.hadoop.yarn.api.protocolrecords.GetNewApplicationResponse;
import org.apache.hadoop.yarn.api.protocolrecords.KillApplicationRequest;
import org.apache.hadoop.yarn.api.records.ApplicationId;
import org.apache.hadoop.yarn.api.records.ApplicationReport;
import org.apache.hadoop.yarn.api.records.ApplicationSubmissionContext;
import org.apache.hadoop.yarn.api.records.ContainerLaunchContext;
import org.apache.hadoop.yarn.api.records.FinalApplicationStatus;
import org.apache.hadoop.yarn.api.records.LocalResource;
import org.apache.hadoop.yarn.api.records.LocalResourceType;
import org.apache.hadoop.yarn.api.records.LocalResourceVisibility;
import org.apache.hadoop.yarn.api.records.NodeReport;
import org.apache.hadoop.yarn.api.records.NodeState;
import org.apache.hadoop.yarn.api.records.Priority;
import org.apache.hadoop.yarn.api.records.QueueACL;
import org.apache.hadoop.yarn.api.records.QueueInfo;
import org.apache.hadoop.yarn.api.records.QueueUserACLInfo;
import org.apache.hadoop.yarn.api.records.Resource;
import org.apache.hadoop.yarn.api.records.YarnApplicationState;
import org.apache.hadoop.yarn.api.records.YarnClusterMetrics;
import org.apache.hadoop.yarn.api.records.timeline.TimelineDomain;
import org.apache.hadoop.yarn.client.api.TimelineClient;
import org.apache.hadoop.yarn.client.api.YarnClient;
import org.apache.hadoop.yarn.client.api.YarnClientApplication;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.hadoop.yarn.exceptions.YarnException;
import org.apache.hadoop.yarn.util.ConverterUtils;
import org.apache.hadoop.yarn.util.timeline.TimelineUtils;
@InterfaceAudience.Public
@InterfaceStability.Unstable
public class Client {
private static final Log LOG = LogFactory.getLog(Client.class);
private Configuration conf;
private YarnClient yarnClient;
private String appName = "";
private int amPriority = 0;
private String amQueue = "";
private int amMemory = 10;
private int amVCores = 1;
private String appMasterJar = "";
private final String appMasterMainClass;
private String shellCommand = "";
private String shellScriptPath = "";
private String[] shellArgs = new String[] ;
private Map<String, String> shellEnv = new HashMap<String, String>();
private int shellCmdPriority = 0;
private int containerMemory = 10;
private int containerVirtualCores = 1;
private int numContainers = 1;
private String nodeLabelExpression = null;
private String log4jPropFile = "";
private final long clientStartTime = System.currentTimeMillis();
private long clientTimeout = 600000;
private boolean keepContainers = false;
private long attemptFailuresValidityInterval = -1;
boolean debugFlag = false;
private String domainId = null;
private boolean toCreateDomain = false;
private String viewACLs = null;
private String modifyACLs = null;
private Options opts;
private static final String shellCommandPath = "shellCommands";
private static final String shellArgsPath = "shellArgs";
private static final String appMasterJarPath = "AppMaster.jar";
private static final String log4jPath = "log4j.properties";
public static final String SCRIPT_PATH = "ExecScript";
public static void main(String[] args)
public Client(Configuration conf) throws Exception
Client(String appMasterMainClass, Configuration conf)
public Client() throws Exception
private void printUsage()
public boolean init(String[] args) throws ParseException
public boolean run() throws IOException, YarnException
