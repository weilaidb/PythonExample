package com.sleepycat.je.util;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.fail;
import java.util.ArrayList;
import java.util.List;
import org.junit.Test;
import org.junit.runner.RunWith;
import org.junit.runners.Parameterized;
import org.junit.runners.Parameterized.Parameters;
import com.sleepycat.util.test.TestBase;
@RunWith(Parameterized.class)
public class DbCacheSizeTest extends TestBase
