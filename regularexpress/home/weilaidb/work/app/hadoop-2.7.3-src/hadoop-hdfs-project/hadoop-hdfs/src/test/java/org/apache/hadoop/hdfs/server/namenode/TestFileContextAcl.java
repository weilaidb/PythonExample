package org.apache.hadoop.hdfs.server.namenode;
import java.io.IOException;
import java.net.URI;
import java.util.List;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileContext;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.permission.AclEntry;
import org.apache.hadoop.fs.permission.AclStatus;
import org.apache.hadoop.hdfs.DistributedFileSystem;
import org.junit.BeforeClass;
public class TestFileContextAcl extends FSAclBaseTest
