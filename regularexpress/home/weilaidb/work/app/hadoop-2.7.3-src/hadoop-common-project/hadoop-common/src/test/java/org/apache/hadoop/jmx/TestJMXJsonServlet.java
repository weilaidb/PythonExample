package org.apache.hadoop.jmx;
import org.apache.hadoop.http.HttpServer2;
import org.apache.hadoop.http.HttpServerFunctionalTest;
import org.junit.AfterClass;
import org.junit.BeforeClass;
import org.junit.Test;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.regex.Matcher;
import java.util.regex.Pattern;
import static org.apache.hadoop.jmx.JMXJsonServlet.ACCESS_CONTROL_ALLOW_METHODS;
import static org.apache.hadoop.jmx.JMXJsonServlet.ACCESS_CONTROL_ALLOW_ORIGIN;
public class TestJMXJsonServlet extends HttpServerFunctionalTest
