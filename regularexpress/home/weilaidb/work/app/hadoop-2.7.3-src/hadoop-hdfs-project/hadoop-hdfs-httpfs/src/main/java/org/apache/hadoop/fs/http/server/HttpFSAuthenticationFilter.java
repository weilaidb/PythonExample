package org.apache.hadoop.fs.http.server;
import org.apache.commons.io.Charsets;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.security.authentication.server.AuthenticationFilter;
import org.apache.hadoop.security.token.delegation.web.DelegationTokenAuthenticationFilter;
import javax.servlet.FilterConfig;
import javax.servlet.ServletException;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.Reader;
import java.util.Map;
import java.util.Properties;
@InterfaceAudience.Private
public class HttpFSAuthenticationFilter
extends DelegationTokenAuthenticationFilter
