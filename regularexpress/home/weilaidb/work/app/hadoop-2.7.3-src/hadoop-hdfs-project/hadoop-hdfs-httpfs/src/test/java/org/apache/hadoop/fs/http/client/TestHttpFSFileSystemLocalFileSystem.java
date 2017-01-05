package org.apache.hadoop.fs.http.client;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeysPublic;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.permission.FsAction;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.test.TestDirHelper;
import org.junit.Assert;
import org.junit.runner.RunWith;
import org.junit.runners.Parameterized;
import java.io.File;
import java.net.URI;
import java.net.URISyntaxException;
@RunWith(value = Parameterized.class)
public class TestHttpFSFileSystemLocalFileSystem extends BaseTestHttpFSWith
