package org.apache.hadoop.fs.http.server;
import org.apache.hadoop.security.token.delegation.web.KerberosDelegationTokenAuthenticationHandler;
import javax.servlet.ServletException;
import java.util.Properties;
public class HttpFSKerberosAuthenticationHandlerForTesting
extends KerberosDelegationTokenAuthenticationHandler
