package org.apache.hadoop.security.authentication.client;
import org.apache.hadoop.security.authentication.server.AuthenticationFilter;
import org.apache.hadoop.security.authentication.server.PseudoAuthenticationHandler;
import org.junit.Assert;
import org.junit.Test;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.Properties;
public class TestPseudoAuthenticator
