package org.apache.hadoop.fs;
import static org.junit.Assert.*;
import java.io.IOException;
import java.security.PrivilegedExceptionAction;
import java.util.UUID;
import java.util.regex.Pattern;
import org.apache.commons.lang.StringUtils;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.hdfs.HdfsConfiguration;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.hdfs.server.namenode.INodeId;
import org.apache.hadoop.security.AccessControlException;
import org.apache.hadoop.security.UserGroupInformation;
import org.junit.*;
public class TestGlobPaths
@Test
public void testPathFilterWithFixedLastComponent() throws IOException
@Test
public void pTestClosure5() throws IOException
@Test
public void pTestCurlyBracket() throws IOException ;
matchedPath = prepareTesting(USER_DIR+"/}c", files);
assertEquals(matchedPath.length, 1);
assertEquals(matchedPath[0], path[0]);
matchedPath = prepareTesting(USER_DIR+"/}c", files);
assertEquals(matchedPath.length, 1);
assertEquals(matchedPath[0], path[0]);
matchedPath = prepareTesting(USER_DIR+"/}bc", files);
assertEquals(matchedPath.length, 1);
assertEquals(matchedPath[0], path[0]);
matchedPath = prepareTesting(USER_DIR+"/}bc", files);
assertEquals(matchedPath.length, 1);
assertEquals(matchedPath[0], path[0]);
matchedPath = prepareTesting(USER_DIR+"/}c", files);
assertEquals(matchedPath.length, 2);
assertEquals(matchedPath[0], path[0]);
assertEquals(matchedPath[1], path[1]);
matchedPath = prepareTesting(USER_DIR+"/}c", files);
assertEquals(matchedPath.length, 2);
assertEquals(matchedPath[0], path[0]);
assertEquals(matchedPath[1], path[1]);
matchedPath = prepareTesting(USER_DIR+"/}", files);
assertEquals(matchedPath.length, 1);
assertEquals(matchedPath[0], path[1]);
boolean hasException = false;
try  catch (IOException e)
assertTrue(hasException);
} finally
}
@Test
public void pTestJavaRegexSpecialChars() throws IOException
private Path[] prepareTesting(String pattern, String[] files)
throws IOException
private Path[] prepareTesting(String pattern, String[] files,
PathFilter filter) throws IOException
private void cleanupDFS() throws IOException
private abstract class FSTestWrapperGlobTest
private void testOnFileSystem(FSTestWrapperGlobTest test) throws Exception
private void testOnFileContext(FSTestWrapperGlobTest test) throws Exception
private static class AcceptAllPathFilter implements PathFilter
private static final PathFilter trueFilter = new AcceptAllPathFilter();
private static class AcceptPathsEndingInZ implements PathFilter
private class TestGlobWithSymlinks extends FSTestWrapperGlobTest {
TestGlobWithSymlinks(boolean useFc)
void run() throws Exception {
wrap.mkdir(new Path(USER_DIR + "/alpha"), FsPermission.getDirDefault(),
false);
wrap.createSymlink(new Path(USER_DIR + "/alpha"), new Path(USER_DIR
+ "/alphaLink"), false);
wrap.mkdir(new Path(USER_DIR + "/alphaLink/beta"),
FsPermission.getDirDefault(), false);
FileStatus[] statuses = wrap.globStatus(new Path(USER_DIR + "/alpha
private class TestGlobWithSymlinksToSymlinks extends
FSTestWrapperGlobTest {
TestGlobWithSymlinksToSymlinks(boolean useFc)
void run() throws Exception {
wrap.mkdir(new Path(USER_DIR + "/alpha"), FsPermission.getDirDefault(),
false);
wrap.createSymlink(new Path(USER_DIR + "/alpha"), new Path(USER_DIR
+ "/alphaLink"), false);
wrap.createSymlink(new Path(USER_DIR + "/alphaLink"), new Path(USER_DIR
+ "/alphaLinkLink"), false);
wrap.mkdir(new Path(USER_DIR + "/alpha/beta"),
FsPermission.getDirDefault(), false);
FileStatus statuses[] = wrap.globStatus(new Path(USER_DIR
+ "/alphaLinkLink"), new AcceptAllPathFilter());
Assert.assertEquals(1, statuses.length);
Assert.assertEquals(USER_DIR + "/alphaLinkLink", statuses[0].getPath()
.toUri().getPath());
statuses = wrap.globStatus(new Path(USER_DIR + "/alphaLinkLinkgammaLinkLinkLink"), new AcceptAllPathFilter());
Assert.assertEquals(1, statuses.length);
Assert.assertEquals(USER_DIR + "/alpha/beta/gammaLinkLinkLink",
statuses[0].getPath().toUri().getPath());
statuses = wrap.globStatus(new Path(USER_DIR + "/alpha/beta
private class TestGlobSymlinksWithCustomPathFilter extends
FSTestWrapperGlobTest
@Ignore
@Test
public void testGlobSymlinksWithCustomPathFilterOnFS() throws Exception
@Ignore
@Test
public void testGlobSymlinksWithCustomPathFilterOnFC() throws Exception
private class TestGlobFillsInScheme extends FSTestWrapperGlobTest
@Test
public void testGlobFillsInSchemeOnFS() throws Exception
@Test
public void testGlobFillsInSchemeOnFC() throws Exception
private class TestRelativePath extends FSTestWrapperGlobTest
@Test
public void testRelativePathOnFS() throws Exception
@Test
public void testRelativePathOnFC() throws Exception
private class TestGlobAccessDenied extends FSTestWrapperGlobTest {
TestGlobAccessDenied(boolean useFc)
void run() throws Exception {
privWrap.mkdir(new Path("/nopermission/val"),
new FsPermission((short)0777), true);
privWrap.mkdir(new Path("/norestrictions/val"),
new FsPermission((short)0777), true);
privWrap.setPermission(new Path("/nopermission"),
new FsPermission((short)0));
try {
wrap.globStatus(new Path("/no*
private class TestReservedHdfsPaths extends FSTestWrapperGlobTest {
TestReservedHdfsPaths(boolean useFc)
void run() throws Exception
