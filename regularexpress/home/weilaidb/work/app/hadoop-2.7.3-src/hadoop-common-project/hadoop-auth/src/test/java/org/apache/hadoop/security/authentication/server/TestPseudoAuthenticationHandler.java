package org.apache.hadoop.security.authentication.server;
import org.apache.hadoop.security.authentication.client.AuthenticationException;
import org.apache.hadoop.security.authentication.client.PseudoAuthenticator;
import org.junit.Assert;
import org.junit.Test;
import org.mockito.Mockito;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.util.Properties;
public class TestPseudoAuthenticationHandler
