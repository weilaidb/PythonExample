package org.apache.hadoop.fs.http.server;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.security.authentication.util.SignerSecretProvider;
import org.apache.hadoop.security.authentication.util.StringSignerSecretProviderCreator;
import org.apache.hadoop.security.token.delegation.web.DelegationTokenAuthenticator;
import org.apache.hadoop.security.token.delegation.web.KerberosDelegationTokenAuthenticationHandler;
import org.json.simple.JSONArray;
import org.junit.Assert;
import java.io.BufferedReader;
import java.io.File;
import java.io.FileOutputStream;
import java.io.FileWriter;
import java.io.IOException;
import java.io.InputStream;
import java.io.InputStreamReader;
import java.io.OutputStream;
import java.io.Writer;
import java.net.HttpURLConnection;
import java.net.URL;
import java.text.MessageFormat;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Map;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeysPublic;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.XAttrCodec;
import org.apache.hadoop.lib.server.Service;
import org.apache.hadoop.lib.server.ServiceException;
import org.apache.hadoop.lib.service.Groups;
import org.apache.hadoop.security.authentication.client.AuthenticatedURL;
import org.apache.hadoop.security.authentication.server.AuthenticationToken;
import org.apache.hadoop.security.authentication.util.Signer;
import org.apache.hadoop.test.HFSTestCase;
import org.apache.hadoop.test.HadoopUsersConfTestHelper;
import org.apache.hadoop.test.TestDir;
import org.apache.hadoop.test.TestDirHelper;
import org.apache.hadoop.test.TestHdfs;
import org.apache.hadoop.test.TestHdfsHelper;
import org.apache.hadoop.test.TestJetty;
import org.apache.hadoop.test.TestJettyHelper;
import org.json.simple.JSONObject;
import org.json.simple.parser.JSONParser;
import org.junit.Test;
import org.mortbay.jetty.Server;
import org.mortbay.jetty.webapp.WebAppContext;
import com.google.common.collect.Maps;
import java.util.Properties;
import org.apache.hadoop.security.authentication.server.AuthenticationFilter;
public class TestHttpFSServer extends HFSTestCase {
@Test
@TestDir
@TestJetty
public void server() throws Exception
public static class MockGroups implements Service,Groups
private void createHttpFSServer(boolean addDelegationTokenAuthHandler)
throws Exception
@Test
@TestDir
@TestJetty
@TestHdfs
public void instrumentation() throws Exception
