package com.sleepycat.je;
import static org.junit.Assert.assertEquals;
import java.io.File;
import java.util.Comparator;
import org.junit.Test;
import com.sleepycat.bind.tuple.IntegerBinding;
import com.sleepycat.je.config.EnvironmentParams;
import com.sleepycat.je.util.DualTestCase;
import com.sleepycat.je.util.TestUtils;
import com.sleepycat.util.test.SharedTestUtils;
public class GetSearchBothRangeTest extends DualTestCase
