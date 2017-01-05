package org.apache.hadoop.hdfs.server.namenode;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;
import java.io.IOException;
import javax.servlet.ServletContext;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.DFSUtil;
import org.apache.hadoop.hdfs.HdfsConfiguration;
import org.apache.hadoop.http.HttpServer2;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.security.authentication.util.KerberosName;
import org.apache.hadoop.security.authorize.AccessControlList;
import org.junit.Test;
import org.mockito.ArgumentMatcher;
import org.mockito.Mockito;
public class TestGetImageServlet
