package org.apache.hadoop.ipc;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertNotNull;
import static org.junit.Assert.assertNull;
import static org.junit.Assert.assertTrue;
import static org.mockito.Mockito.mock;
import static org.mockito.Mockito.when;
import junit.framework.TestCase;
import java.util.concurrent.CountDownLatch;
import java.util.concurrent.TimeUnit;
import java.util.concurrent.BlockingQueue;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.conf.Configuration;
import org.mockito.Matchers;
import static org.apache.hadoop.ipc.FairCallQueue.IPC_CALLQUEUE_PRIORITY_LEVELS_KEY;
public class TestFairCallQueue extends TestCase
