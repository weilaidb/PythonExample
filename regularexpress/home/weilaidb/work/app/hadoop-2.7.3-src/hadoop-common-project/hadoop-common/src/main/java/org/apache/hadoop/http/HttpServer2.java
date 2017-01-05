package org.apache.hadoop.http;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.InterruptedIOException;
import java.io.PrintStream;
import java.net.BindException;
import java.net.InetSocketAddress;
import java.net.URI;
import java.net.URL;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Enumeration;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.Properties;
import javax.servlet.Filter;
import javax.servlet.FilterChain;
import javax.servlet.FilterConfig;
import javax.servlet.ServletContext;
import javax.servlet.ServletException;
import javax.servlet.ServletRequest;
import javax.servlet.ServletResponse;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletRequestWrapper;
import javax.servlet.http.HttpServletResponse;
import com.google.common.collect.ImmutableMap;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.HadoopIllegalArgumentException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.ConfServlet;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.security.AuthenticationFilterInitializer;
import org.apache.hadoop.security.authentication.util.FileSignerSecretProvider;
import org.apache.hadoop.security.authentication.util.RandomSignerSecretProvider;
import org.apache.hadoop.security.authentication.util.SignerSecretProvider;
import org.apache.hadoop.security.authentication.util.ZKSignerSecretProvider;
import org.apache.hadoop.security.ssl.SslSocketConnectorSecure;
import org.apache.hadoop.jmx.JMXJsonServlet;
import org.apache.hadoop.log.LogLevel;
import org.apache.hadoop.metrics.MetricsServlet;
import org.apache.hadoop.security.SecurityUtil;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.security.authentication.server.AuthenticationFilter;
import org.apache.hadoop.security.authorize.AccessControlList;
import org.apache.hadoop.util.ReflectionUtils;
import org.apache.hadoop.util.Shell;
import org.mortbay.io.Buffer;
import org.mortbay.jetty.Connector;
import org.mortbay.jetty.Handler;
import org.mortbay.jetty.MimeTypes;
import org.mortbay.jetty.RequestLog;
import org.mortbay.jetty.Server;
import org.mortbay.jetty.SessionManager;
import org.mortbay.jetty.handler.ContextHandler;
import org.mortbay.jetty.handler.ContextHandlerCollection;
import org.mortbay.jetty.handler.HandlerCollection;
import org.mortbay.jetty.handler.RequestLogHandler;
import org.mortbay.jetty.nio.SelectChannelConnector;
import org.mortbay.jetty.security.SslSocketConnector;
import org.mortbay.jetty.servlet.AbstractSessionManager;
import org.mortbay.jetty.servlet.Context;
import org.mortbay.jetty.servlet.DefaultServlet;
import org.mortbay.jetty.servlet.FilterHolder;
import org.mortbay.jetty.servlet.FilterMapping;
import org.mortbay.jetty.servlet.ServletHandler;
import org.mortbay.jetty.servlet.ServletHolder;
import org.mortbay.jetty.webapp.WebAppContext;
import org.mortbay.thread.QueuedThreadPool;
import org.mortbay.util.MultiException;
import com.google.common.base.Preconditions;
import com.google.common.collect.Lists;
import com.sun.jersey.spi.container.servlet.ServletContainer;
import static org.apache.hadoop.security.authentication.server
.AuthenticationFilter.*;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public final class HttpServer2 implements FilterContainer {
public static final Log LOG = LogFactory.getLog(HttpServer2.class);
static final String FILTER_INITIALIZER_PROPERTY
= "hadoop.http.filter.initializers";
public static final String HTTP_MAX_THREADS = "hadoop.http.max.threads";
public static final String CONF_CONTEXT_ATTRIBUTE = "hadoop.conf";
public static final String ADMINS_ACL = "admins.acl";
public static final String SPNEGO_FILTER = "SpnegoFilter";
public static final String NO_CACHE_FILTER = "NoCacheFilter";
public static final String BIND_ADDRESS = "bind.address";
private final AccessControlList adminsAcl;
protected final Server webServer;
private final List<Connector> listeners = Lists.newArrayList();
protected final WebAppContext webAppContext;
protected final boolean findPort;
protected final Map<Context, Boolean> defaultContexts =
new HashMap<>();
protected final List<String> filterNames = new ArrayList<>();
static final String STATE_DESCRIPTION_ALIVE = " - alive";
static final String STATE_DESCRIPTION_NOT_LIVE = " - not live";
private final SignerSecretProvider secretProvider;
public static class Builder
private HttpServer2(final Builder b) throws IOException
private void initializeWebServer(String name, String hostName,
Configuration conf, String[] pathSpecs)
throws IOException
private void addListener(Connector connector)
private static WebAppContext createWebAppContext(String name,
Configuration conf, AccessControlList adminsAcl, final String appDir)
private static SignerSecretProvider constructSecretProvider(final Builder b,
ServletContext ctx)
throws Exception
private static Properties getFilterProperties(Configuration conf, String
prefix)
private static void addNoCacheFilter(WebAppContext ctxt) {
defineFilter(ctxt, NO_CACHE_FILTER, NoCacheFilter.class.getName(),
Collections.<String, String> emptyMap(), new String[]
@InterfaceAudience.Private
public static Connector createDefaultChannelConnector()
private static FilterInitializer[] getFilterInitializers(Configuration conf)
protected void addDefaultApps(ContextHandlerCollection parent,
final String appDir, Configuration conf) throws IOException {
String logDir = System.getProperty("hadoop.log.dir");
if (logDir != null) {
Context logContext = new Context(parent, "/logs");
logContext.setResourceBase(logDir);
logContext.addServlet(AdminAuthorizedServlet.class, "
protected void addDefaultServlets()
public void addContext(Context ctxt, boolean isFiltered)
public void setAttribute(String name, Object value)
public void addJerseyResourcePackage(final String packageName,
final String pathSpec)
public void addServlet(String name, String pathSpec,
Class<? extends HttpServlet> clazz)
public void addInternalServlet(String name, String pathSpec,
Class<? extends HttpServlet> clazz)
public void addInternalServlet(String name, String pathSpec,
Class<? extends HttpServlet> clazz, boolean requireAuth)
@Override
public void addFilter(String name, String classname,
Map<String, String> parameters) {
FilterHolder filterHolder = getFilterHolder(name, classname, parameters);
final String[] USER_FACING_URLS = ;
FilterMapping fmap = getFilterMapping(name, USER_FACING_URLS);
defineFilter(webAppContext, filterHolder, fmap);
LOG.info(
"Added filter " + name + " (class=" + classname + ") to context " + webAppContext.getDisplayName());
final String[] ALL_URLS =
