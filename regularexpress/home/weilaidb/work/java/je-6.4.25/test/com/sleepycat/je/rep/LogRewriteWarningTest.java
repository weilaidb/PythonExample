package com.sleepycat.je.rep;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertSame;
import static org.junit.Assert.assertTrue;
import java.io.File;
import java.util.Set;
import java.util.concurrent.Callable;
import org.junit.Before;
import org.junit.Test;
import com.sleepycat.je.Database;
import com.sleepycat.je.EnvironmentFailureException;
import com.sleepycat.je.Transaction;
import com.sleepycat.je.rep.impl.RepTestBase;
import com.sleepycat.je.rep.utilint.RepTestUtils;
import com.sleepycat.je.rep.utilint.RepTestUtils.RepEnvInfo;
public class LogRewriteWarningTest extends RepTestBase
