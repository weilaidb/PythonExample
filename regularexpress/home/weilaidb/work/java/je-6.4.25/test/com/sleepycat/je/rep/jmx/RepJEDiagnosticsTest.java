package com.sleepycat.je.rep.jmx;
import java.io.File;
import javax.management.DynamicMBean;
import org.junit.After;
import com.sleepycat.je.Environment;
import com.sleepycat.je.EnvironmentConfig;
import com.sleepycat.je.rep.ReplicatedEnvironment;
import com.sleepycat.je.rep.utilint.RepTestUtils;
import com.sleepycat.je.rep.utilint.RepTestUtils.RepEnvInfo;
import com.sleepycat.je.util.TestUtils;
import com.sleepycat.util.test.SharedTestUtils;
public class RepJEDiagnosticsTest extends com.sleepycat.je.jmx.JEDiagnosticsTest
