package com.sleepycat.je.cleaner;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.fail;
import java.io.File;
import com.sleepycat.bind.tuple.IntegerBinding;
import org.junit.After;
import org.junit.Test;
import com.sleepycat.je.CheckpointConfig;
import com.sleepycat.je.Database;
import com.sleepycat.je.DatabaseConfig;
import com.sleepycat.je.DatabaseEntry;
import com.sleepycat.je.Environment;
import com.sleepycat.je.EnvironmentConfig;
import com.sleepycat.je.EnvironmentStats;
import com.sleepycat.je.util.TestUtils;
import com.sleepycat.util.test.SharedTestUtils;
import com.sleepycat.util.test.TestBase;
public class WakeupTest extends TestBase
