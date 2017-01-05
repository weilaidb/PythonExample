package org.apache.hadoop.fs;
import java.util.Arrays;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.FSDataOutputStream;
import org.apache.hadoop.fs.permission.FsPermission;
import static org.apache.hadoop.fs.FileSystemTestHelper.*;
import org.apache.hadoop.conf.Configuration;
import org.junit.*;
import static org.junit.Assert.*;
public class TestChecksumFileSystem
