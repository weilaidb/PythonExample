package org.apache.hadoop.security.authentication.server;
import java.io.IOException;
import java.util.Locale;
import java.util.Properties;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import org.apache.hadoop.security.authentication.client.AuthenticationException;
public abstract class AltKerberosAuthenticationHandler
extends KerberosAuthenticationHandler
