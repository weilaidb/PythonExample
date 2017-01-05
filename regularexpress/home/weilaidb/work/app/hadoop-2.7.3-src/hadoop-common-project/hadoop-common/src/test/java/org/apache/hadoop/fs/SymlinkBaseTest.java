package org.apache.hadoop.fs;
import java.io.*;
import java.net.URI;
import java.util.EnumSet;
import org.apache.hadoop.fs.Options.CreateOpts;
import org.apache.hadoop.fs.Options.Rename;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.test.GenericTestUtils;
import static org.junit.Assert.*;
import static org.junit.Assume.assumeTrue;
import org.junit.Test;
import org.junit.Before;
import org.junit.After;
public abstract class SymlinkBaseTest
