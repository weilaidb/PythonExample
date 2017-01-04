package com.sleepycat.je;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertTrue;
import static org.junit.Assert.fail;
import java.io.File;
import java.util.Arrays;
import org.junit.Test;
import com.sleepycat.je.util.DualTestCase;
import com.sleepycat.je.util.StringDbt;
import com.sleepycat.je.util.TestUtils;
import com.sleepycat.util.test.SharedTestUtils;
public class DirtyReadTest extends DualTestCase
