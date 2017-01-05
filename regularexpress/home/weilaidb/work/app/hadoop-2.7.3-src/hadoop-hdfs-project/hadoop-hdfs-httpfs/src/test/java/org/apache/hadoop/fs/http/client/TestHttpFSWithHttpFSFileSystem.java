package org.apache.hadoop.fs.http.client;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeysPublic;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.test.TestHdfsHelper;
import org.junit.runner.RunWith;
import org.junit.runners.Parameterized;
@RunWith(value = Parameterized.class)
public class TestHttpFSWithHttpFSFileSystem extends BaseTestHttpFSWith
