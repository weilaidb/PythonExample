package com.sleepycat.je;
import static org.junit.Assert.assertEquals;
import java.io.File;
import java.util.ArrayList;
import org.junit.Test;
import com.sleepycat.je.junit.JUnitProcessThread;
import com.sleepycat.persist.EntityStore;
import com.sleepycat.persist.PrimaryIndex;
import com.sleepycat.persist.StoreConfig;
import com.sleepycat.persist.model.Entity;
import com.sleepycat.persist.model.PrimaryKey;
import com.sleepycat.util.test.SharedTestUtils;
import com.sleepycat.util.test.TestBase;
public class MultiProcessWriteTest extends TestBase
