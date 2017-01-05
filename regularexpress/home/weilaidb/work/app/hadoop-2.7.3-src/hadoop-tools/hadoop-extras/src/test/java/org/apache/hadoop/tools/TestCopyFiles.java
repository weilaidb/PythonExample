package org.apache.hadoop.tools;
import java.io.ByteArrayOutputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.io.PrintStream;
import java.net.URI;
import java.security.PrivilegedExceptionAction;
import java.util.ArrayList;
import java.util.List;
import java.util.Random;
import java.util.StringTokenizer;
import junit.framework.TestCase;
import org.apache.commons.logging.LogFactory;
import org.apache.commons.logging.impl.Log4JLogger;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.ContentSummary;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.FsShell;
import org.apache.hadoop.fs.FSDataInputStream;
import org.apache.hadoop.fs.FSDataOutputStream;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.hdfs.MiniDFSCluster.Builder;
import org.apache.hadoop.hdfs.server.datanode.DataNode;
import org.apache.hadoop.hdfs.server.namenode.FSNamesystem;
import org.apache.hadoop.mapred.JobConf;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.util.ToolRunner;
import org.apache.log4j.Level;
public class TestCopyFiles extends TestCase
public void testCopyFromLocalToDfs() throws Exception  finally
}
public void testCopyFromDfsToLocal() throws Exception
public void testCopyDfsToDfsUpdateOverwrite() throws Exception  finally
}
public void testCopyDfsToDfsUpdateWithSkipCRC() throws Exception  finally
}
public void testCopyDuplication() throws Exception {
final FileSystem localfs = FileSystem.get(LOCAL_FS, new Configuration());
try {
MyFile[] files = createFiles(localfs, TEST_ROOT_DIR+"/srcdat");
ToolRunner.run(new DistCpV1(new Configuration()),
new String[]
public void testCopySingleFile() throws Exception {
FileSystem fs = FileSystem.get(LOCAL_FS, new Configuration());
Path root = new Path(TEST_ROOT_DIR+"/srcdat");
try {
MyFile[] files = ;
ToolRunner.run(new DistCpV1(new Configuration()),
new String[] {"file:
"file:
assertTrue("Source and destination directories do not match.",
checkFiles(fs, TEST_ROOT_DIR+"/destdat", files));
String fname = files[0].getName();
Path p = new Path(root, fname);
FileSystem.LOG.info("fname=" + fname + ", exists? " + fs.exists(p));
ToolRunner.run(new DistCpV1(new Configuration()),
new String[]
