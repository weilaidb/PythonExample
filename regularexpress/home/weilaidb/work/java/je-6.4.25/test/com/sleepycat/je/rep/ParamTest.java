package com.sleepycat.je.rep;
import static org.junit.Assert.fail;
import java.io.File;
import java.util.Properties;
import org.junit.Test;
import com.sleepycat.je.EnvironmentConfig;
import com.sleepycat.je.dbi.DbConfigManager;
import com.sleepycat.je.rep.impl.RepParams;
import com.sleepycat.util.test.SharedTestUtils;
import com.sleepycat.util.test.TestBase;
public class ParamTest extends TestBase
