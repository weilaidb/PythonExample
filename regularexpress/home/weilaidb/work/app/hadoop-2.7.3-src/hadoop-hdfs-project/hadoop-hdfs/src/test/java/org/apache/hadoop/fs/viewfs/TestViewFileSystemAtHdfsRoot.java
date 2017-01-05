package org.apache.hadoop.fs.viewfs;
import java.io.IOException;
import java.net.URISyntaxException;
import javax.security.auth.login.LoginException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.FileSystemTestHelper;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.junit.AfterClass;
import org.junit.Before;
import org.junit.BeforeClass;
public class TestViewFileSystemAtHdfsRoot extends ViewFileSystemBaseTest
