package org.apache.hadoop.http;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.PrintStream;
import java.net.BindException;
import java.net.InetSocketAddress;
import java.net.URL;
import java.security.GeneralSecurityException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Enumeration;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.net.ssl.SSLServerSocketFactory;
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
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.ConfServlet;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.fs.CommonConfigurationKeysPublic;
import org.apache.hadoop.jmx.JMXJsonServlet;
import org.apache.hadoop.log.LogLevel;
import org.apache.hadoop.metrics.MetricsServlet;
import org.apache.hadoop.security.SecurityUtil;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.security.authentication.server.AuthenticationFilter;
import org.apache.hadoop.security.authorize.AccessControlList;
import org.apache.hadoop.security.ssl.SSLFactory;
import org.apache.hadoop.util.ReflectionUtils;
import org.apache.hadoop.util.Shell;
import org.mortbay.io.Buffer;
import org.mortbay.jetty.Connector;
import org.mortbay.jetty.Handler;
import org.mortbay.jetty.MimeTypes;
import org.mortbay.jetty.Server;
import org.mortbay.jetty.handler.ContextHandler;
import org.mortbay.jetty.handler.ContextHandlerCollection;
import org.mortbay.jetty.nio.SelectChannelConnector;
import org.mortbay.jetty.security.SslSocketConnector;
import org.mortbay.jetty.servlet.Context;
import org.mortbay.jetty.servlet.DefaultServlet;
import org.mortbay.jetty.servlet.FilterHolder;
import org.mortbay.jetty.servlet.FilterMapping;
import org.mortbay.jetty.servlet.ServletHandler;
import org.mortbay.jetty.servlet.ServletHolder;
import org.mortbay.jetty.webapp.WebAppContext;
import org.mortbay.thread.QueuedThreadPool;
import org.mortbay.util.MultiException;
import com.sun.jersey.spi.container.servlet.ServletContainer;
@InterfaceAudience.LimitedPrivate()
@InterfaceStability.Evolving
@Deprecated
public class HttpServer implements FilterContainer {
public static final Log LOG = LogFactory.getLog(HttpServer.class);
static final String FILTER_INITIALIZER_PROPERTY
= "hadoop.http.filter.initializers";
static final String HTTP_MAX_THREADS = "hadoop.http.max.threads";
public static final String CONF_CONTEXT_ATTRIBUTE = "hadoop.conf";
public static final String ADMINS_ACL = "admins.acl";
public static final String SPNEGO_FILTER = "SpnegoFilter";
public static final String NO_CACHE_FILTER = "NoCacheFilter";
public static final String BIND_ADDRESS = "bind.address";
private AccessControlList adminsAcl;
private SSLFactory sslFactory;
protected final Server webServer;
protected final Connector listener;
protected final WebAppContext webAppContext;
protected final boolean findPort;
protected final Map<Context, Boolean> defaultContexts =
new HashMap<Context, Boolean>();
protected final List<String> filterNames = new ArrayList<String>();
private static final int MAX_RETRIES = 10;
static final String STATE_DESCRIPTION_ALIVE = " - alive";
static final String STATE_DESCRIPTION_NOT_LIVE = " - not live";
private final boolean listenerStartedExternally;
public HttpServer(String name, String bindAddress, int port, boolean findPort
) throws IOException
public HttpServer(String name, String bindAddress, int port,
boolean findPort, Configuration conf, Connector connector) throws IOException
public HttpServer(String name, String bindAddress, int port,
boolean findPort, Configuration conf, String[] pathSpecs) throws IOException
public HttpServer(String name, String bindAddress, int port,
boolean findPort, Configuration conf) throws IOException
public HttpServer(String name, String bindAddress, int port,
boolean findPort, Configuration conf, AccessControlList adminsAcl)
throws IOException
public HttpServer(String name, String bindAddress, int port,
boolean findPort, Configuration conf, AccessControlList adminsAcl,
Connector connector) throws IOException
public HttpServer(String name, String bindAddress, int port,
boolean findPort, Configuration conf, AccessControlList adminsAcl,
Connector connector, String[] pathSpecs) throws IOException
@SuppressWarnings("unchecked")
private void addNoCacheFilter(WebAppContext ctxt) {
defineFilter(ctxt, NO_CACHE_FILTER,
NoCacheFilter.class.getName(), Collections.EMPTY_MAP, new String[] { "
public Connector createBaseListener(Configuration conf) throws IOException
private static class SelectChannelConnectorWithSafeStartup
extends SelectChannelConnector
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
throws IOException
protected void addContext(String pathSpec, String dir, boolean isFiltered) throws IOException
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
final String[] USER_FACING_URLS = ;
defineFilter(webAppContext, name, classname, parameters, USER_FACING_URLS);
LOG.info("Added filter " + name + " (class=" + classname
+ ") to context " + webAppContext.getDisplayName());
final String[] ALL_URLS =
