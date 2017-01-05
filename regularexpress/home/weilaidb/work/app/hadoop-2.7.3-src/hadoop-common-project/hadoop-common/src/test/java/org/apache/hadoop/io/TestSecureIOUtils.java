package org.apache.hadoop.io;
import static org.junit.Assert.fail;
import static org.junit.Assume.assumeTrue;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.nativeio.NativeIO;
import org.junit.AfterClass;
import org.junit.BeforeClass;
import org.junit.Test;
public class TestSecureIOUtils
