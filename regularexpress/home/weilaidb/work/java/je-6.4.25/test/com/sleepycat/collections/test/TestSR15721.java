package com.sleepycat.collections.test;
import static org.junit.Assert.assertNull;
import static org.junit.Assert.assertTrue;
import static org.junit.Assert.fail;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;
import com.sleepycat.collections.CurrentTransaction;
import com.sleepycat.je.Environment;
import com.sleepycat.util.test.TestBase;
import com.sleepycat.util.test.TestEnv;
public class TestSR15721 extends TestBase
