package org.apache.hadoop.security.authentication.server;
import org.apache.hadoop.security.authentication.client.AuthenticationException;
import org.apache.hadoop.security.authentication.client.PseudoAuthenticator;
import org.apache.http.client.utils.URLEncodedUtils;
import org.apache.http.NameValuePair;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import java.io.IOException;
import java.nio.charset.Charset;
import java.util.List;
import java.util.Properties;
public class PseudoAuthenticationHandler implements AuthenticationHandler
