package com.sleepycat.je.rep.utilint.net;
import static
com.sleepycat.je.rep.ReplicationSSLConfig.SSL_KEYSTORE_PASSWORD;
import static
com.sleepycat.je.rep.ReplicationSSLConfig.SSL_KEYSTORE_PASSWORD_CLASS;
import static
com.sleepycat.je.rep.ReplicationSSLConfig.SSL_KEYSTORE_PASSWORD_PARAMS;
import static com.sleepycat.je.rep.ReplicationSSLConfig.SSL_PROTOCOLS;
import static com.sleepycat.je.rep.ReplicationSSLConfig.SSL_CIPHER_SUITES;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;
import static org.junit.Assert.fail;
import java.io.IOException;
import java.net.InetSocketAddress;
import java.net.ServerSocket;
import java.nio.ByteBuffer;
import java.nio.channels.SelectionKey;
import java.nio.channels.Selector;
import java.nio.channels.ServerSocketChannel;
import java.nio.channels.SocketChannel;
import java.util.Properties;
import java.util.Random;
import java.util.Set;
import com.sleepycat.util.test.SharedTestUtils;
import com.sleepycat.util.test.TestBase;
import com.sleepycat.utilint.StringUtils;
import com.sleepycat.je.rep.ReplicationNetworkConfig;
import com.sleepycat.je.rep.ReplicationSSLConfig;
import com.sleepycat.je.rep.net.PasswordSource;
import com.sleepycat.je.rep.net.DataChannel;
import com.sleepycat.je.rep.net.DataChannelFactory;
import com.sleepycat.je.rep.net.DataChannelFactory.ConnectOptions;
import com.sleepycat.je.rep.net.InstanceContext;
import com.sleepycat.je.rep.net.InstanceParams;
import com.sleepycat.je.rep.utilint.FreePortLocator;
import com.sleepycat.je.rep.utilint.RepTestUtils;
import com.sleepycat.je.rep.utilint.net.SSLChannelFactory;
import com.sleepycat.je.rep.utilint.net.DataChannelFactoryBuilder.ChannelFormatter;
import com.sleepycat.je.rep.utilint.net.DataChannelFactoryBuilder.ChannelLoggerFactory;
import org.junit.AfterClass;
import org.junit.BeforeClass;
import org.junit.Test;
public class SSLChannelTest extends TestBase
