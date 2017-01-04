package com.sleepycat.je;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertSame;
import java.io.File;
import java.util.Comparator;
import org.junit.Before;
import org.junit.Test;
import com.sleepycat.bind.serial.SerialBinding;
import com.sleepycat.bind.serial.StoredClassCatalog;
import com.sleepycat.bind.tuple.IntegerBinding;
import com.sleepycat.je.util.DualTestCase;
import com.sleepycat.je.util.SimpleClassLoader;
import com.sleepycat.je.util.TestUtils;
import com.sleepycat.persist.EntityStore;
import com.sleepycat.persist.StoreConfig;
import com.sleepycat.util.test.SharedTestUtils;
public class ClassLoaderTest extends DualTestCase
