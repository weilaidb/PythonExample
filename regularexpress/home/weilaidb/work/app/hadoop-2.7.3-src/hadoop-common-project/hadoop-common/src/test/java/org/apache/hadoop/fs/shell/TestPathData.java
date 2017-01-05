package org.apache.hadoop.fs.shell;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertTrue;
import static org.junit.Assert.fail;
import java.io.File;
import java.io.IOException;
import java.net.URI;
import java.util.Arrays;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.util.Shell;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;
public class TestPathData {
private static final String TEST_ROOT_DIR =
System.getProperty("test.build.data","build/test/data") + "/testPD";
protected Configuration conf;
protected FileSystem fs;
protected Path testDir;
@Before
public void initialize() throws Exception
@After
public void cleanup() throws Exception
@Test (timeout = 30000)
public void testWithDirStringAndConf() throws Exception
@Test (timeout = 30000)
public void testUnqualifiedUriContents() throws Exception
@Test (timeout = 30000)
public void testQualifiedUriContents() throws Exception
@Test (timeout = 30000)
public void testCwdContents() throws Exception
@Test (timeout = 30000)
public void testToFile() throws Exception
@Test (timeout = 5000)
public void testToFileRawWindowsPaths() throws Exception
@Test (timeout = 5000)
public void testInvalidWindowsPath() throws Exception
@Test (timeout = 30000)
public void testAbsoluteGlob() throws Exception
@Test (timeout = 30000)
public void testRelativeGlob() throws Exception
@Test (timeout = 30000)
public void testRelativeGlobBack() throws Exception
