package org.apache.hadoop.hdfs.nfs.nfs3;
import static org.junit.Assert.assertTrue;
import java.io.File;
import java.net.URL;
import org.apache.hadoop.fs.FileUtil;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.DFSTestUtil;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.hdfs.nfs.conf.NfsConfigKeys;
import org.apache.hadoop.hdfs.nfs.conf.NfsConfiguration;
import org.apache.hadoop.http.HttpConfig;
import org.apache.hadoop.security.ssl.KeyStoreTestUtil;
import org.junit.AfterClass;
import org.junit.BeforeClass;
import org.junit.Test;
public class TestNfs3HttpServer
