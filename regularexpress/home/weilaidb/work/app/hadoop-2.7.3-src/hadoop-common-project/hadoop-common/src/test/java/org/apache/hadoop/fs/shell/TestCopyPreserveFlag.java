package org.apache.hadoop.fs.shell;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertTrue;
import java.io.IOException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FSDataOutputStream;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.FileSystemTestHelper;
import org.apache.hadoop.fs.LocalFileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.permission.FsAction;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.fs.shell.CopyCommands.Cp;
import org.apache.hadoop.fs.shell.CopyCommands.Get;
import org.apache.hadoop.fs.shell.CopyCommands.Put;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;
public class TestCopyPreserveFlag
