package org.apache.hadoop.fs;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.net.URI;
import java.net.URISyntaxException;
import java.util.EnumSet;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.fs.Options.ChecksumOpt;
import org.apache.hadoop.security.AccessControlException;
import org.apache.hadoop.util.Progressable;
import org.junit.Test;
public class TestAfsCheckPath
