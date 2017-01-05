package org.apache.hadoop.yarn.server.applicationhistoryservice;
import java.io.IOException;
import java.net.InetSocketAddress;
import java.util.ArrayList;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.http.HttpServer2;
import org.apache.hadoop.metrics2.lib.DefaultMetricsSystem;
import org.apache.hadoop.metrics2.source.JvmMetrics;
import org.apache.hadoop.security.AuthenticationFilterInitializer;
import org.apache.hadoop.security.HttpCrossOriginFilterInitializer;
import org.apache.hadoop.security.SecurityUtil;
import org.apache.hadoop.service.CompositeService;
import org.apache.hadoop.service.Service;
import org.apache.hadoop.util.ExitUtil;
import org.apache.hadoop.util.GenericOptionsParser;
import org.apache.hadoop.util.ReflectionUtils;
import org.apache.hadoop.util.ShutdownHookManager;
import org.apache.hadoop.util.StringUtils;
import org.apache.hadoop.yarn.YarnUncaughtExceptionHandler;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.hadoop.yarn.exceptions.YarnRuntimeException;
import org.apache.hadoop.yarn.server.applicationhistoryservice.webapp.AHSWebApp;
import org.apache.hadoop.yarn.server.security.ApplicationACLsManager;
import org.apache.hadoop.yarn.server.timeline.LeveldbTimelineStore;
import org.apache.hadoop.yarn.server.timeline.TimelineDataManager;
import org.apache.hadoop.yarn.server.timeline.TimelineStore;
import org.apache.hadoop.yarn.server.timeline.security.TimelineACLsManager;
import org.apache.hadoop.yarn.server.timeline.security.TimelineAuthenticationFilter;
import org.apache.hadoop.yarn.server.timeline.security.TimelineAuthenticationFilterInitializer;
import org.apache.hadoop.yarn.server.timeline.security.TimelineDelegationTokenSecretManagerService;
import org.apache.hadoop.yarn.server.timeline.webapp.CrossOriginFilterInitializer;
import org.apache.hadoop.yarn.webapp.WebApp;
import org.apache.hadoop.yarn.webapp.WebApps;
import org.apache.hadoop.yarn.webapp.util.WebAppUtils;
import org.mortbay.jetty.servlet.FilterHolder;
import org.mortbay.jetty.webapp.WebAppContext;
import com.google.common.annotations.VisibleForTesting;
public class ApplicationHistoryServer extends CompositeService {
public static final int SHUTDOWN_HOOK_PRIORITY = 30;
private static final Log LOG = LogFactory
.getLog(ApplicationHistoryServer.class);
private ApplicationHistoryClientService ahsClientService;
private ApplicationACLsManager aclsManager;
private ApplicationHistoryManager historyManager;
private TimelineStore timelineStore;
private TimelineDelegationTokenSecretManagerService secretManagerService;
private TimelineDataManager timelineDataManager;
private WebApp webApp;
public ApplicationHistoryServer()
@Override
protected void serviceInit(Configuration conf) throws Exception
@Override
protected void serviceStart() throws Exception
@Override
protected void serviceStop() throws Exception
@Private
@VisibleForTesting
ApplicationHistoryClientService getClientService()
private InetSocketAddress getListenerAddress()
@Private
@VisibleForTesting
public int getPort()
@Private
@VisibleForTesting
public TimelineStore getTimelineStore()
@Private
@VisibleForTesting
ApplicationHistoryManager getApplicationHistoryManager()
static ApplicationHistoryServer launchAppHistoryServer(String[] args)
public static void main(String[] args)
private ApplicationHistoryClientService
createApplicationHistoryClientService(
ApplicationHistoryManager historyManager)
private ApplicationACLsManager createApplicationACLsManager(
Configuration conf)
private ApplicationHistoryManager createApplicationHistoryManager(
Configuration conf)
private TimelineStore createTimelineStore(
Configuration conf)
private TimelineDelegationTokenSecretManagerService
createTimelineDelegationTokenSecretManagerService(Configuration conf)
private TimelineDataManager createTimelineDataManager(Configuration conf)
@SuppressWarnings("unchecked")
private void startWebApp() {
Configuration conf = getConfig();
TimelineAuthenticationFilter.setTimelineDelegationTokenSecretManager(
secretManagerService.getTimelineDelegationTokenSecretManager());
String initializers = conf.get("hadoop.http.filter.initializers");
boolean modifiedInitializers = false;
initializers =
initializers == null || initializers.length() == 0 ? "" : initializers;
if (!initializers.contains(CrossOriginFilterInitializer.class.getName()))
if (!initializers.contains(TimelineAuthenticationFilterInitializer.class
.getName()))
String[] parts = initializers.split(",");
ArrayList<String> target = new ArrayList<String>();
for (String filterInitializer : parts)
String actualInitializers =
org.apache.commons.lang.StringUtils.join(target, ",");
if (modifiedInitializers)
String bindAddress = WebAppUtils.getWebAppBindURL(conf,
YarnConfiguration.TIMELINE_SERVICE_BIND_HOST,
WebAppUtils.getAHSWebAppURLWithoutScheme(conf));
try {
AHSWebApp ahsWebApp = new AHSWebApp(timelineDataManager, ahsClientService);
webApp =
WebApps
.$for("applicationhistory", ApplicationHistoryClientService.class,
ahsClientService, "ws")
.with(conf).withAttribute(YarnConfiguration.TIMELINE_SERVICE_WEBAPP_ADDRESS,
conf.get(YarnConfiguration.TIMELINE_SERVICE_WEBAPP_ADDRESS)).at(bindAddress).build(ahsWebApp);
HttpServer2 httpServer = webApp.httpServer();
String[] names = conf.getTrimmedStrings(YarnConfiguration.TIMELINE_SERVICE_UI_NAMES);
WebAppContext webAppContext = httpServer.getWebAppContext();
for (String name : names) {
String webPath = conf.get(
YarnConfiguration.TIMELINE_SERVICE_UI_WEB_PATH_PREFIX + name);
String onDiskPath = conf.get(
YarnConfiguration.TIMELINE_SERVICE_UI_ON_DISK_PATH_PREFIX + name);
WebAppContext uiWebAppContext = new WebAppContext();
uiWebAppContext.setContextPath(webPath);
uiWebAppContext.setWar(onDiskPath);
final String[] ALL_URLS =
