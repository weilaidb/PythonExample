package org.apache.hadoop.security.ssl;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.security.authentication.client.ConnectionConfigurator;
import org.apache.hadoop.util.ReflectionUtils;
import org.apache.hadoop.util.StringUtils;
import static org.apache.hadoop.util.PlatformName.IBM_JAVA;
import javax.net.ssl.HostnameVerifier;
import javax.net.ssl.HttpsURLConnection;
import javax.net.ssl.SSLContext;
import javax.net.ssl.SSLEngine;
import javax.net.ssl.SSLServerSocketFactory;
import javax.net.ssl.SSLSocketFactory;
import java.io.IOException;
import java.net.HttpURLConnection;
import java.security.GeneralSecurityException;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class SSLFactory implements ConnectionConfigurator
