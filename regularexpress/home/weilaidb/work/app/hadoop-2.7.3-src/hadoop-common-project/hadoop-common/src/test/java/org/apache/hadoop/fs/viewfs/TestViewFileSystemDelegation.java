package org.apache.hadoop.fs.viewfs;
import java.io.IOException;
import java.net.URI;
import java.util.Collections;
import java.util.List;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.FileSystemTestHelper;
import org.apache.hadoop.fs.FsConstants;
import org.apache.hadoop.fs.LocalFileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.permission.AclEntry;
import org.apache.hadoop.fs.viewfs.TestChRootedFileSystem.MockFileSystem;
import org.junit.*;
import static org.junit.Assert.*;
import static org.mockito.Mockito.*;
public class TestViewFileSystemDelegation
