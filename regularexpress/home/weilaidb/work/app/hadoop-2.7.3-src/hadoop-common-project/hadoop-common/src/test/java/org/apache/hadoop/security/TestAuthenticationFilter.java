package org.apache.hadoop.security;
import junit.framework.TestCase;
import org.apache.hadoop.http.HttpServer2;
import org.apache.hadoop.security.authentication.server.AuthenticationFilter;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.http.FilterContainer;
import org.mockito.Mockito;
import org.mockito.invocation.InvocationOnMock;
import org.mockito.stubbing.Answer;
import java.io.File;
import java.io.FileWriter;
import java.io.Writer;
import java.util.Map;
public class TestAuthenticationFilter extends TestCase
