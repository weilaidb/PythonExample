package org.apache.hadoop.http;
import org.apache.hadoop.net.NetUtils;
import org.apache.hadoop.security.authorize.AccessControlList;
import org.junit.Assert;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.http.HttpServer2.Builder;
import java.io.File;
import java.io.IOException;
import java.io.InputStream;
import java.net.HttpURLConnection;
import java.net.URI;
import java.net.URL;
import java.net.MalformedURLException;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
public class HttpServerFunctionalTest extends Assert
