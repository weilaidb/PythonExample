package org.apache.hadoop.fs;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.permission.AclEntry;
import org.apache.hadoop.fs.permission.AclStatus;
import org.apache.hadoop.fs.permission.FsAction;
import org.apache.hadoop.fs.permission.FsPermission;
import org.apache.hadoop.security.Credentials;
import org.apache.hadoop.security.token.Token;
import org.apache.hadoop.util.Progressable;
import org.junit.Assert;
import org.junit.Test;
import java.io.IOException;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.util.EnumSet;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import static org.apache.hadoop.fs.Options.ChecksumOpt;
import static org.apache.hadoop.fs.Options.CreateOpts;
import static org.apache.hadoop.fs.Options.Rename;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertTrue;
@SuppressWarnings("deprecation")
public class TestHarFileSystem
