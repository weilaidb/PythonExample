package org.apache.hadoop.hdfs;
import java.io.*;
import java.security.Permission;
import java.security.PrivilegedExceptionAction;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Map;
import java.util.Random;
import java.util.Scanner;
import java.util.concurrent.atomic.AtomicInteger;
import java.util.zip.DeflaterOutputStream;
import java.util.zip.GZIPOutputStream;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.*;
import org.apache.hadoop.fs.permission.AclEntry;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.hdfs.protocol.Block;
import org.apache.hadoop.hdfs.protocol.BlockListAsLongs;
import org.apache.hadoop.hdfs.server.datanode.DataNode;
import org.apache.hadoop.hdfs.server.datanode.DataNodeTestUtils;
import org.apache.hadoop.hdfs.server.protocol.DatanodeStorage;
import org.apache.hadoop.hdfs.tools.DFSAdmin;
import org.apache.hadoop.io.IOUtils;
import org.apache.hadoop.io.SequenceFile;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.io.compress.BZip2Codec;
import org.apache.hadoop.io.compress.CompressionCodec;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.test.PathUtils;
import org.apache.hadoop.util.ReflectionUtils;
import org.apache.hadoop.util.StringUtils;
import org.apache.hadoop.util.ToolRunner;
import org.apache.hadoop.test.GenericTestUtils;
import org.apache.log4j.Level;
import org.junit.Test;
import static org.apache.hadoop.fs.CommonConfigurationKeysPublic.FS_TRASH_INTERVAL_KEY;
import static org.apache.hadoop.fs.permission.AclEntryScope.ACCESS;
import static org.apache.hadoop.fs.permission.AclEntryScope.DEFAULT;
import static org.apache.hadoop.fs.permission.AclEntryType.*;
import static org.apache.hadoop.fs.permission.FsAction.*;
import static org.apache.hadoop.hdfs.server.namenode.AclTestHelpers.aclEntry;
import static org.hamcrest.CoreMatchers.is;
import static org.hamcrest.CoreMatchers.not;
import static org.junit.Assert.*;
import static org.hamcrest.core.StringContains.containsString;
import com.google.common.collect.Lists;
public class TestDFSShell {
private static final Log LOG = LogFactory.getLog(TestDFSShell.class);
private static final AtomicInteger counter = new AtomicInteger();
private final int SUCCESS = 0;
private final int ERROR = 1;
static final String TEST_ROOT_DIR = PathUtils.getTestDirName(TestDFSShell.class);
private static final String RAW_A1 = "raw.a1";
private static final String TRUSTED_A1 = "trusted.a1";
private static final String USER_A1 = "user.a1";
private static final byte[] RAW_A1_VALUE = new byte[];
private static final byte[] TRUSTED_A1_VALUE = new byte[];
private static final byte[] USER_A1_VALUE = new byte[];
static Path writeFile(FileSystem fs, Path f) throws IOException
static Path mkdir(FileSystem fs, Path p) throws IOException
static File createLocalFile(File f) throws IOException
static File createLocalFileWithRandomData(int fileLength, File f)
throws IOException
static void show(String s)
@Test (timeout = 30000)
public void testZeroSizeFile() throws IOException
@Test (timeout = 30000)
public void testRecursiveRm() throws IOException
@Test (timeout = 30000)
public void testDu() throws IOException
@Test (timeout = 30000)
public void testPut() throws IOException
@Test (timeout = 30000)
public void testErrOutPut() throws Exception {
Configuration conf = new HdfsConfiguration();
MiniDFSCluster cluster = null;
PrintStream bak = null;
try {
cluster = new MiniDFSCluster.Builder(conf).numDataNodes(2).build();
FileSystem srcFs = cluster.getFileSystem();
Path root = new Path("/nonexistentfile");
bak = System.err;
ByteArrayOutputStream out = new ByteArrayOutputStream();
PrintStream tmp = new PrintStream(out);
System.setErr(tmp);
String[] argv = new String[2];
argv[0] = "-cat";
argv[1] = root.toUri().getPath();
int ret = ToolRunner.run(new FsShell(), argv);
assertEquals(" -cat returned 1 ", 1, ret);
String returned = out.toString();
assertTrue("cat does not print exceptions ",
(returned.lastIndexOf("Exception") == -1));
out.reset();
argv[0] = "-rm";
argv[1] = root.toString();
FsShell shell = new FsShell();
shell.setConf(conf);
ret = ToolRunner.run(shell, argv);
assertEquals(" -rm returned 1 ", 1, ret);
returned = out.toString();
out.reset();
assertTrue("rm prints reasonable error ",
(returned.lastIndexOf("No such file or directory") != -1));
argv[0] = "-rmr";
argv[1] = root.toString();
ret = ToolRunner.run(shell, argv);
assertEquals(" -rmr returned 1", 1, ret);
returned = out.toString();
assertTrue("rmr prints reasonable error ",
(returned.lastIndexOf("No such file or directory") != -1));
out.reset();
argv[0] = "-du";
argv[1] = "/nonexistentfile";
ret = ToolRunner.run(shell, argv);
returned = out.toString();
assertTrue(" -du prints reasonable error ",
(returned.lastIndexOf("No such file or directory") != -1));
out.reset();
argv[0] = "-dus";
argv[1] = "/nonexistentfile";
ret = ToolRunner.run(shell, argv);
returned = out.toString();
assertTrue(" -dus prints reasonable error",
(returned.lastIndexOf("No such file or directory") != -1));
out.reset();
argv[0] = "-ls";
argv[1] = "/nonexistenfile";
ret = ToolRunner.run(shell, argv);
returned = out.toString();
assertTrue(" -ls does not return Found 0 items",
(returned.lastIndexOf("Found 0") == -1));
out.reset();
argv[0] = "-ls";
argv[1] = "/nonexistentfile";
ret = ToolRunner.run(shell, argv);
assertEquals(" -lsr should fail ", 1, ret);
out.reset();
srcFs.mkdirs(new Path("/testdir"));
argv[0] = "-ls";
argv[1] = "/testdir";
ret = ToolRunner.run(shell, argv);
returned = out.toString();
assertTrue(" -ls does not print out anything ",
(returned.lastIndexOf("Found 0") == -1));
out.reset();
argv[0] = "-ls";
argv[1] = "/user/nonxistant
void testChmod(Configuration conf, FileSystem fs, String chmodDir)
throws IOException
private void confirmPermissionChange(String toApply, String expected,
FileSystem fs, FsShell shell, Path dir2) throws IOException
private void confirmOwner(String owner, String group,
FileSystem fs, Path... paths) throws IOException
@Test (timeout = 30000)
public void testFilePermissions() throws IOException
