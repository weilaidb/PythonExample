package org.apache.hadoop.security;
import static org.apache.hadoop.fs.CommonConfigurationKeysPublic.HADOOP_SECURITY_AUTHENTICATION;
import static org.apache.hadoop.security.UserGroupInformation.AuthenticationMethod.*;
import static org.junit.Assert.*;
import java.io.IOException;
import java.net.InetAddress;
import java.net.InetSocketAddress;
import java.net.URI;
import javax.security.auth.kerberos.KerberosPrincipal;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.net.NetUtils;
import org.apache.hadoop.security.token.Token;
import org.apache.hadoop.security.token.TokenIdentifier;
import org.apache.hadoop.util.StringUtils;
import org.junit.BeforeClass;
import org.junit.Test;
import org.mockito.Mockito;
public class TestSecurityUtil
