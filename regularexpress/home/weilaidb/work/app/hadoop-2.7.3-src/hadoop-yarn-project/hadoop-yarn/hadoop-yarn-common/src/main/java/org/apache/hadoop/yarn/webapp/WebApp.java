package org.apache.hadoop.yarn.webapp;
import static com.google.common.base.Preconditions.checkNotNull;
import java.net.InetSocketAddress;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.http.HttpServer2;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import com.google.common.base.CharMatcher;
import com.google.common.base.Splitter;
import com.google.common.collect.Lists;
import com.google.inject.Provides;
import com.google.inject.servlet.GuiceFilter;
import com.google.inject.servlet.ServletModule;
import com.sun.jersey.api.container.filter.GZIPContentEncodingFilter;
import com.sun.jersey.api.core.ResourceConfig;
import com.sun.jersey.core.util.FeaturesAndProperties;
import com.sun.jersey.guice.spi.container.servlet.GuiceContainer;
import com.sun.jersey.spi.container.servlet.ServletContainer;
@InterfaceAudience.LimitedPrivate()
public abstract class WebApp extends ServletModule {
private static final Logger LOG = LoggerFactory.getLogger(WebApp.class);
public enum HTTP ;
private volatile String name;
private volatile List<String> servePathSpecs = new ArrayList<String>();
private volatile String redirectPath;
private volatile String wsName;
private volatile Configuration conf;
private volatile HttpServer2 httpServer;
private volatile GuiceFilter guiceFilter;
private final Router router = new Router();
static final int R_PATH = 0;
static final int R_CONTROLLER = 1;
static final int R_ACTION = 2;
static final int R_PARAMS = 3;
static final Splitter pathSplitter =
Splitter.on('/').trimResults().omitEmptyStrings();
void setHttpServer(HttpServer2 server)
@Provides public HttpServer2 httpServer()
public InetSocketAddress getListenerAddress()
public int port()
public void stop()
public void joinThread()
void setConf(Configuration conf)
@Provides public Configuration conf()
@Provides Router router()
@Provides WebApp webApp()
void setName(String name)
public String name()
public String wsName()
void addServePathSpec(String path)
public String[] getServePathSpecs()
void setRedirectPath(String path)
void setWebServices (String name)
public String getRedirectPath()
void setHostClass(Class<?> cls)
void setGuiceFilter(GuiceFilter instance)
@Override
public void configureServlets()
protected void configureWebAppServlets() {
if (this.wsName != null)
