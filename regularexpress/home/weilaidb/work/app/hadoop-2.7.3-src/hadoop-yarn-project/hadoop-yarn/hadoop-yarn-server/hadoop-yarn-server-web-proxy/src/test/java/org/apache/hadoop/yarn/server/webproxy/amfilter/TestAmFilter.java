package org.apache.hadoop.yarn.server.webproxy.amfilter;
import java.io.IOException;
import java.io.PrintWriter;
import java.io.StringWriter;
import java.util.*;
import java.util.concurrent.atomic.AtomicBoolean;
import javax.servlet.*;
import javax.servlet.http.Cookie;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import static org.junit.Assert.*;
import org.apache.hadoop.yarn.server.webproxy.ProxyUtils;
import org.apache.hadoop.yarn.server.webproxy.WebAppProxyServlet;
import org.glassfish.grizzly.servlet.HttpServletResponseImpl;
import org.junit.Test;
import org.mockito.Mockito;
public class TestAmFilter
