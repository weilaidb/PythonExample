package org.apache.hadoop.http;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.http.HttpServer2.QuotingInputFilter.RequestQuoter;
import org.apache.hadoop.http.resource.JerseyResource;
import org.apache.hadoop.net.NetUtils;
import org.apache.hadoop.security.Groups;
import org.apache.hadoop.security.ShellBasedUnixGroupsMapping;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.security.authorize.AccessControlList;
import org.junit.AfterClass;
import org.junit.Assert;
import org.junit.BeforeClass;
import org.junit.Test;
import org.mockito.Mockito;
import org.mockito.internal.util.reflection.Whitebox;
import org.mortbay.jetty.Connector;
import org.mortbay.util.ajax.JSON;
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
import java.io.IOException;
import java.io.PrintWriter;
import java.net.HttpURLConnection;
import java.net.URI;
import java.net.URL;
import java.util.Arrays;
import java.util.Enumeration;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.SortedSet;
import java.util.TreeSet;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.Executor;
import java.util.concurrent.Executors;
public class TestHttpServer extends HttpServerFunctionalTest {
static final Log LOG = LogFactory.getLog(TestHttpServer.class);
private static HttpServer2 server;
private static final int MAX_THREADS = 10;
@SuppressWarnings("serial")
public static class EchoMapServlet extends HttpServlet
@SuppressWarnings("serial")
public static class EchoServlet extends HttpServlet
@SuppressWarnings("serial")
public static class HtmlContentServlet extends HttpServlet
@BeforeClass public static void setup() throws Exception
