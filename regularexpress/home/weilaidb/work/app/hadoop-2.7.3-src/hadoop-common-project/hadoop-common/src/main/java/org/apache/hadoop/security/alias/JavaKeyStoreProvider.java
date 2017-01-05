package org.apache.hadoop.security.alias;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FSDataOutputStream;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.permission.FsPermission;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.URI;
@InterfaceAudience.Private
public class JavaKeyStoreProvider extends AbstractJavaKeyStoreProvider
