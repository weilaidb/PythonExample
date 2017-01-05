package org.apache.hadoop.fs;
import java.io.DataInputStream;
import java.io.IOException;
import java.io.FileNotFoundException;
import java.util.EnumSet;
import org.apache.hadoop.fs.Options.CreateOpts;
import org.apache.hadoop.fs.Options.CreateOpts.BlockSize;
import org.apache.hadoop.fs.Options.Rename;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.io.IOUtils;
import org.apache.hadoop.security.AccessControlException;
import org.junit.Assert;
public final class FileContextTestWrapper extends FSTestWrapper
