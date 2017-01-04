package com.sleepycat.je.rep;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertNull;
import static org.junit.Assert.assertTrue;
import static org.junit.Assert.fail;
import static
com.sleepycat.je.rep.ReplicationSSLConfig.SSL_KEYSTORE_FILE;
import static
com.sleepycat.je.rep.ReplicationSSLConfig.SSL_KEYSTORE_PASSWORD_CLASS;
import static
com.sleepycat.je.rep.ReplicationSSLConfig.SSL_KEYSTORE_PASSWORD_PARAMS;
import static
com.sleepycat.je.rep.ReplicationSSLConfig.SSL_KEYSTORE_PASSWORD;
import static
com.sleepycat.je.rep.ReplicationSSLConfig.SSL_KEYSTORE_TYPE;
import static
com.sleepycat.je.rep.ReplicationSSLConfig.SSL_CLIENT_KEY_ALIAS;
import static
com.sleepycat.je.rep.ReplicationSSLConfig.SSL_SERVER_KEY_ALIAS;
import static
com.sleepycat.je.rep.ReplicationSSLConfig.SSL_TRUSTSTORE_FILE;
import static
com.sleepycat.je.rep.ReplicationSSLConfig.SSL_TRUSTSTORE_TYPE;
import static
com.sleepycat.je.rep.ReplicationSSLConfig.SSL_CIPHER_SUITES;
import static
com.sleepycat.je.rep.ReplicationSSLConfig.SSL_PROTOCOLS;
import static
com.sleepycat.je.rep.ReplicationSSLConfig.SSL_AUTHENTICATOR;
import static
com.sleepycat.je.rep.ReplicationSSLConfig.SSL_AUTHENTICATOR_CLASS;
import static
com.sleepycat.je.rep.ReplicationSSLConfig.SSL_AUTHENTICATOR_PARAMS;
import static
com.sleepycat.je.rep.ReplicationSSLConfig.SSL_HOST_VERIFIER;
import static
com.sleepycat.je.rep.ReplicationSSLConfig.SSL_HOST_VERIFIER_CLASS;
import static
com.sleepycat.je.rep.ReplicationSSLConfig.SSL_HOST_VERIFIER_PARAMS;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.net.InetSocketAddress;
import java.nio.channels.SocketChannel;
import java.util.Properties;
import org.junit.Before;
import org.junit.Test;
import com.sleepycat.je.rep.impl.RepParams.ChannelTypeConfigParam;
import com.sleepycat.je.rep.net.DataChannel;
import com.sleepycat.je.rep.net.DataChannelFactory;
import com.sleepycat.je.rep.net.InstanceParams;
import com.sleepycat.je.rep.net.PasswordSource;
import com.sleepycat.je.rep.utilint.RepTestUtils;
import com.sleepycat.je.rep.utilint.net.DataChannelFactoryBuilder;
import com.sleepycat.je.rep.utilint.net.SSLChannelFactory;
import com.sleepycat.je.rep.utilint.net.SSLMirrorAuthenticator;
import com.sleepycat.je.rep.utilint.net.SSLMirrorHostVerifier;
import com.sleepycat.je.rep.utilint.net.SimpleChannelFactory;
import com.sleepycat.je.util.TestUtils;
import com.sleepycat.util.test.SharedTestUtils;
import com.sleepycat.util.test.TestBase;
public class ReplicationNetworkConfigTest extends TestBase
