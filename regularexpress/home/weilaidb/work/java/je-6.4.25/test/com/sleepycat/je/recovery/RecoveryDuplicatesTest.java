package com.sleepycat.je.recovery;
import static org.junit.Assert.assertEquals;
import java.util.HashMap;
import java.util.Map;
import java.util.Set;
import org.junit.Test;
import com.sleepycat.je.Environment;
import com.sleepycat.je.EnvironmentConfig;
import com.sleepycat.je.Transaction;
import com.sleepycat.je.config.EnvironmentParams;
import com.sleepycat.je.util.TestUtils;
public class RecoveryDuplicatesTest extends RecoveryTestBase
