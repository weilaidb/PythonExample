package org.apache.hadoop.fs.viewfs;
import java.io.IOException;
import java.net.URISyntaxException;
import javax.security.auth.login.LoginException;
import org.apache.hadoop.fs.FileContext;
import org.apache.hadoop.fs.FileContextTestHelper;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.RemoteIterator;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.HdfsConfiguration;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.junit.AfterClass;
import org.junit.Before;
import org.junit.BeforeClass;
public class TestViewFsAtHdfsRoot extends ViewFsBaseTest
