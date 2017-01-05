package org.apache.hadoop.fs;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.EnumSet;
import java.util.NoSuchElementException;
import org.apache.commons.lang.RandomStringUtils;
import org.apache.hadoop.HadoopIllegalArgumentException;
import org.apache.hadoop.fs.Options.CreateOpts;
import org.apache.hadoop.fs.Options.Rename;
import org.apache.hadoop.fs.permission.FsPermission;
import org.junit.After;
import org.junit.Assert;
import static org.junit.Assert.*;
import org.junit.Before;
import org.junit.Test;
import static org.apache.hadoop.fs.FileContextTestHelper.*;
import static org.apache.hadoop.fs.CreateFlag.*;
public abstract class FileContextMainOperationsBaseTest  {
private static String TEST_DIR_AAA2 = "test/hadoop2/aaa";
private static String TEST_DIR_AAA = "test/hadoop/aaa";
private static String TEST_DIR_AXA = "test/hadoop/axa";
private static String TEST_DIR_AXX = "test/hadoop/axx";
private static int numBlocks = 2;
public Path localFsRootPath;
protected final FileContextTestHelper fileContextTestHelper =
createFileContextHelper();
protected FileContextTestHelper createFileContextHelper()
protected static FileContext fc;
final private static PathFilter DEFAULT_FILTER = new PathFilter() ;
final private static PathFilter TEST_X_FILTER = new PathFilter() ;
private static final byte[] data = getFileData(numBlocks,
getDefaultBlockSize());
@Before
public void setUp() throws Exception
@After
public void tearDown() throws Exception
protected Path getDefaultWorkingDirectory() throws IOException
protected boolean renameSupported()
protected IOException unwrapException(IOException e)
@Test
public void testFsStatus() throws Exception
@Test
public void testWorkingDirectory() throws Exception
@Test
public void testMkdirs() throws Exception
@Test
public void testMkdirsFailsForSubdirectoryOfExistingFile() throws Exception
@Test
public void testGetFileStatusThrowsExceptionForNonExistentFile()
throws Exception
public void testListStatusThrowsExceptionForNonExistentFile()
throws Exception
@Test
public void testListStatus() throws Exception
@Test
public void testListStatusFilterWithNoMatches() throws Exception
public void testListStatusFilterWithSomeMatches() throws Exception
@Test
public void testGlobStatusNonExistentFile() throws Exception
@Test
public void testGlobStatusWithNoMatchesInPath() throws Exception
@Test
public void testGlobStatusSomeMatchesInDirectories() throws Exception
@Test
public void testGlobStatusWithMultipleWildCardMatches() throws Exception
