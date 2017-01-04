package com.sleepycat.je.rep.util;
import java.net.InetSocketAddress;
import org.junit.After;
import org.junit.Before;
import com.sleepycat.je.rep.utilint.RepTestUtils;
import com.sleepycat.je.rep.utilint.ServiceDispatcher;
import com.sleepycat.je.rep.utilint.net.DataChannelFactoryBuilder;
import com.sleepycat.util.test.TestBase;
public abstract class ServiceDispatcherTestBase extends TestBase
