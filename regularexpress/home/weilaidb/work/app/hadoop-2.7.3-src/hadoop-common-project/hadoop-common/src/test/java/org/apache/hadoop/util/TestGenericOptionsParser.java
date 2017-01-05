package org.apache.hadoop.util;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.net.URI;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Map;
import junit.framework.TestCase;
import org.apache.commons.math3.util.Pair;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.security.Credentials;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.security.token.Token;
import org.apache.hadoop.security.token.delegation.AbstractDelegationTokenIdentifier;
import org.apache.hadoop.test.GenericTestUtils;
import org.apache.commons.cli.Option;
import org.apache.commons.cli.OptionBuilder;
import org.apache.commons.cli.Options;
import org.junit.Assert;
import com.google.common.collect.Maps;
import static org.junit.Assert.fail;
public class TestGenericOptionsParser extends TestCase {
File testDir;
Configuration conf;
FileSystem localFs;
public void testFilesOption() throws Exception
public void testEmptyFilenames() throws Exception
@SuppressWarnings("static-access")
public void testCreateWithOptions() throws Exception
public void testConfWithMultipleOpts() throws Exception
@Override
protected void setUp() throws Exception
@Override
protected void tearDown() throws Exception
public void testTokenCacheOption() throws IOException
public void testDOptionParsing() throws Exception {
String[] args;
Map<String,String> expectedMap;
String[] expectedRemainingArgs;
args = new String[];
expectedRemainingArgs = new String[];
expectedMap = Maps.newHashMap();
assertDOptionParsing(args, expectedMap, expectedRemainingArgs);
args = new String[];
expectedRemainingArgs = new String[];
expectedMap = Maps.newHashMap();
expectedMap.put("key1", "value1");
assertDOptionParsing(args, expectedMap, expectedRemainingArgs);
args = new String[]{"-fs", "hdfs:
expectedRemainingArgs = new String[];
assertDOptionParsing(args, expectedMap, expectedRemainingArgs);
args = new String[]{"-fs", "hdfs:
assertDOptionParsing(args, expectedMap, expectedRemainingArgs);
if (Shell.WINDOWS)
