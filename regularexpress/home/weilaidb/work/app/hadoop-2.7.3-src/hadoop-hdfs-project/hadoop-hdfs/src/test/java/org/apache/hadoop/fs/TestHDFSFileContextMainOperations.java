package org.apache.hadoop.fs;
import static org.apache.hadoop.fs.FileContextTestHelper.exists;
import static org.junit.Assert.fail;
import java.io.IOException;
import java.net.URI;
import java.net.URISyntaxException;
import javax.security.auth.login.LoginException;
import org.apache.hadoop.fs.Options.Rename;
import org.apache.hadoop.hdfs.AppendTestUtil;
import org.apache.hadoop.hdfs.DistributedFileSystem;
import org.apache.hadoop.hdfs.HdfsConfiguration;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.hdfs.protocol.HdfsConstants;
import org.apache.hadoop.ipc.RemoteException;
import org.apache.hadoop.security.UserGroupInformation;
import org.junit.After;
import org.junit.AfterClass;
import org.junit.Assert;
import org.junit.Before;
import org.junit.BeforeClass;
import org.junit.Test;
public class TestHDFSFileContextMainOperations extends
FileContextMainOperationsBaseTest
