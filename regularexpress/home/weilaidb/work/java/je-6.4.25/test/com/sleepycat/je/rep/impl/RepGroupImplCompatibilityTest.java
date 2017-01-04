package com.sleepycat.je.rep.impl;
import static org.junit.Assert.fail;
import static com.sleepycat.je.rep.impl.RepParams.TEST_JE_VERSION;
import org.junit.Test;
import com.sleepycat.je.DatabaseException;
import com.sleepycat.je.EnvironmentFailureException;
import com.sleepycat.je.JEVersion;
import com.sleepycat.je.rep.impl.RepTestBase;
import com.sleepycat.je.rep.stream.Protocol;
import com.sleepycat.je.rep.utilint.RepTestUtils.RepEnvInfo;
public class RepGroupImplCompatibilityTest extends RepTestBase
