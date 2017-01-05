package org.apache.hadoop.fs;
import java.io.IOException;
import java.net.URISyntaxException;
import javax.security.auth.login.LoginException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.hdfs.HdfsConfiguration;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.security.UserGroupInformation;
import org.junit.After;
import org.junit.AfterClass;
import org.junit.Before;
import org.junit.BeforeClass;
public class TestFcHdfsPermission extends FileContextPermissionBase
