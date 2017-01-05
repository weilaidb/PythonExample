package org.apache.hadoop.fs.viewfs;
import java.io.IOException;
import java.net.URI;
import java.net.URISyntaxException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.FileAlreadyExistsException;
import org.apache.hadoop.fs.UnsupportedFileSystemException;
import org.apache.hadoop.fs.viewfs.ConfigUtil;
import org.apache.hadoop.fs.viewfs.InodeTree;
import org.junit.Test;
public class TestViewFsConfig
