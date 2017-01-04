package com.sleepycat.je;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertTrue;
import static org.junit.Assert.fail;
import java.io.File;
import org.junit.Before;
import org.junit.Test;
import com.sleepycat.bind.tuple.StringBinding;
import com.sleepycat.je.util.TestUtils;
import com.sleepycat.util.test.SharedTestUtils;
import com.sleepycat.util.test.TestBase;
public class EnvMultiSubDirTest extends TestBase
