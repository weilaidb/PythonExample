package com.sleepycat.je.trigger;
import static org.junit.Assert.assertTrue;
import java.io.File;
import java.io.Serializable;
import java.util.Collections;
import java.util.HashSet;
import java.util.Set;
import org.junit.Before;
import com.sleepycat.je.DatabaseConfig;
import com.sleepycat.je.DatabaseEntry;
import com.sleepycat.je.Environment;
import com.sleepycat.je.EnvironmentConfig;
import com.sleepycat.je.Transaction;
import com.sleepycat.je.rep.utilint.RepTestUtils;
import com.sleepycat.je.util.DualTestCase;
import com.sleepycat.util.test.SharedTestUtils;
public class TestBase extends DualTestCase
