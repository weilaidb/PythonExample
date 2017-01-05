package org.apache.hadoop.security.authentication.client;
import org.apache.hadoop.minikdc.KerberosSecurityTestcase;
import org.apache.hadoop.security.authentication.KerberosTestUtils;
import org.apache.hadoop.security.authentication.server.AuthenticationFilter;
import org.apache.hadoop.security.authentication.server.PseudoAuthenticationHandler;
import org.apache.hadoop.security.authentication.server.KerberosAuthenticationHandler;
import org.junit.Assert;
import org.junit.Before;
import org.junit.runners.Parameterized;
import org.junit.runners.Parameterized.Parameters;
import org.junit.runner.RunWith;
import org.junit.Test;
import java.io.File;
import java.net.HttpURLConnection;
import java.net.URL;
import java.util.Arrays;
import java.util.Collection;
import java.util.Properties;
import java.util.concurrent.Callable;
@RunWith(Parameterized.class)
public class TestKerberosAuthenticator extends KerberosSecurityTestcase
