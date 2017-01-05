package org.apache.hadoop.yarn.webapp;
import static com.google.common.base.Preconditions.checkNotNull;
import java.io.IOException;
import java.net.ConnectException;
import java.net.URI;
import java.net.URL;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import javax.servlet.http.HttpServlet;
import org.apache.commons.lang.StringUtils;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.http.HttpConfig.Policy;
import org.apache.hadoop.http.HttpServer2;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.security.authorize.AccessControlList;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.hadoop.yarn.webapp.util.WebAppUtils;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;
import com.google.inject.AbstractModule;
import com.google.inject.Guice;
import com.google.inject.Injector;
import com.google.inject.servlet.GuiceFilter;
@InterfaceAudience.LimitedPrivate()
public class WebApps {
static final Logger LOG = LoggerFactory.getLogger(WebApps.class);
public static class Builder<T> {
static class ServletStruct
final String name;
final String wsName;
final Class<T> api;
final T application;
String bindAddress = "0.0.0.0";
int port = 0;
boolean findPort = false;
Configuration conf;
Policy httpPolicy = null;
boolean devMode = false;
private String spnegoPrincipalKey;
private String spnegoKeytabKey;
private final HashSet<ServletStruct> servlets = new HashSet<ServletStruct>();
private final HashMap<String, Object> attributes = new HashMap<String, Object>();
Builder(String name, Class<T> api, T application, String wsName)
Builder(String name, Class<T> api, T application)
public Builder<T> at(String bindAddress)
public Builder<T> at(int port)
public Builder<T> at(String address, int port, boolean findPort)
public Builder<T> withAttribute(String key, Object value)
public Builder<T> withServlet(String name, String pathSpec,
Class<? extends HttpServlet> servlet)
public Builder<T> with(Configuration conf)
public Builder<T> withHttpPolicy(Configuration conf, Policy httpPolicy)
public Builder<T> withHttpSpnegoPrincipalKey(String spnegoPrincipalKey)
public Builder<T> withHttpSpnegoKeytabKey(String spnegoKeytabKey)
public Builder<T> inDevMode()
public WebApp build(WebApp webapp) {
if (webapp == null)
webapp.setName(name);
webapp.setWebServices(wsName);
String basePath = "/" + name;
webapp.setRedirectPath(basePath);
List<String> pathList = new ArrayList<String>();
if (basePath.equals("/"))
