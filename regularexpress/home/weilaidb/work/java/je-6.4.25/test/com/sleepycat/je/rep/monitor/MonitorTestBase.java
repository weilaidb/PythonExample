package com.sleepycat.je.rep.monitor;
import static org.junit.Assert.assertEquals;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.atomic.AtomicInteger;
import org.junit.After;
import org.junit.Before;
import com.sleepycat.je.rep.impl.RepTestBase;
public class MonitorTestBase extends RepTestBase
