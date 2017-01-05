package org.apache.hadoop.fs.http.client;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.FileUtil;
import org.apache.hadoop.hdfs.web.SWebHdfsFileSystem;
import org.apache.hadoop.security.ssl.KeyStoreTestUtil;
import org.apache.hadoop.test.TestJettyHelper;
import org.junit.AfterClass;
import org.junit.runner.RunWith;
import org.junit.runners.Parameterized;
import java.io.File;
import java.net.URI;
import java.net.URL;
import java.util.UUID;
@RunWith(value = Parameterized.class)
public class TestHttpFSFWithSWebhdfsFileSystem
extends TestHttpFSWithHttpFSFileSystem
