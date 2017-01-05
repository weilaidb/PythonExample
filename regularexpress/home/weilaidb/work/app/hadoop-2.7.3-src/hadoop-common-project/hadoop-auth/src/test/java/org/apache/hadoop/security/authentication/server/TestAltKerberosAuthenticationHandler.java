package org.apache.hadoop.security.authentication.server;
import java.io.IOException;
import java.util.Properties;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import org.apache.hadoop.security.authentication.client.AuthenticationException;
import org.junit.Assert;
import org.junit.Test;
import org.mockito.Mockito;
public class TestAltKerberosAuthenticationHandler
extends TestKerberosAuthenticationHandler
