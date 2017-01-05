package org.apache.hadoop.lib.service.scheduler;
import static org.junit.Assert.assertNotNull;
import java.util.Arrays;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.lib.server.Server;
import org.apache.hadoop.lib.service.Scheduler;
import org.apache.hadoop.lib.service.instrumentation.InstrumentationService;
import org.apache.hadoop.test.HTestCase;
import org.apache.hadoop.test.TestDir;
import org.apache.hadoop.test.TestDirHelper;
import org.apache.hadoop.util.StringUtils;
import org.junit.Test;
public class TestSchedulerService extends HTestCase
