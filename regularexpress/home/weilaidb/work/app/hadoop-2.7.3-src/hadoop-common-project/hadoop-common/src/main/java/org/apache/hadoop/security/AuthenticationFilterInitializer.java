package org.apache.hadoop.security;
import org.apache.hadoop.http.HttpServer2;
import org.apache.hadoop.security.authentication.server.AuthenticationFilter;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.http.FilterContainer;
import org.apache.hadoop.http.FilterInitializer;
import org.apache.hadoop.security.authentication.server.KerberosAuthenticationHandler;
import java.io.IOException;
import java.util.HashMap;
import java.util.Map;
public class AuthenticationFilterInitializer extends FilterInitializer
