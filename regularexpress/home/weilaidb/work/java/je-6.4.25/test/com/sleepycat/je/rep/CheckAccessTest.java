package com.sleepycat.je.rep;
import static org.junit.Assert.assertTrue;
import java.io.File;
import java.util.Iterator;
import java.util.Properties;
import org.junit.Before;
import org.junit.Test;
import com.sleepycat.je.EnvironmentConfig;
import com.sleepycat.je.rep.utilint.RepTestUtils;
import com.sleepycat.je.util.TestUtils;
import com.sleepycat.util.test.SharedTestUtils;
import com.sleepycat.util.test.TestBase;
public class CheckAccessTest extends TestBase
