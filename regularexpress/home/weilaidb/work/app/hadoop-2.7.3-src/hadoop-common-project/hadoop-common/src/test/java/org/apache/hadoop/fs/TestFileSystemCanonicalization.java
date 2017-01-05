package org.apache.hadoop.fs;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertNotNull;
import java.io.IOException;
import java.net.URI;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.net.NetUtils;
import org.apache.hadoop.security.NetUtilsTestResolver;
import org.apache.hadoop.util.Progressable;
import org.junit.BeforeClass;
import org.junit.Test;
public class TestFileSystemCanonicalization {
static String[] authorities = ;
static String[] ips = ;
@BeforeClass
public static void initialize() throws Exception
@Test
public void testShortAuthority() throws Exception
@Test
public void testPartialAuthority() throws Exception
@Test
public void testFullAuthority() throws Exception
@Test
public void testShortAuthorityWithDefaultPort() throws Exception
@Test
public void testPartialAuthorityWithDefaultPort() throws Exception
@Test
public void testFullAuthorityWithDefaultPort() throws Exception
@Test
public void testShortAuthorityWithOtherPort() throws Exception
@Test
public void testPartialAuthorityWithOtherPort() throws Exception
@Test
public void testFullAuthorityWithOtherPort() throws Exception
@Test
public void testIpAuthority() throws Exception
@Test
public void testIpAuthorityWithDefaultPort() throws Exception
@Test
public void testIpAuthorityWithOtherPort() throws Exception
@Test
public void testMismatchedSchemes() throws Exception
@Test
public void testMismatchedHosts() throws Exception
@Test
public void testNullAuthority() throws Exception {
FileSystem fs = getVerifiedFS("myfs:
verifyPaths(fs, new String[]
@Test
public void testAuthorityFromDefaultFS() throws Exception {
Configuration config = new Configuration();
String defaultFsKey = CommonConfigurationKeys.FS_DEFAULT_NAME_KEY;
FileSystem fs = getVerifiedFS("myfs:
verifyPaths(fs, new String[]{ "myfs:
config.set(defaultFsKey, "myfs:
verifyPaths(fs, new String[]{ "myfs:
config.set(defaultFsKey, "myfs2:
verifyPaths(fs, new String[]{ "myfs:
config.set(defaultFsKey, "myfs:
verifyPaths(fs, new String[]
