package org.apache.hadoop.tools;
import static org.junit.Assert.fail;
import org.junit.Assert;
import org.junit.Test;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.test.GenericTestUtils;
import org.apache.hadoop.tools.DistCpOptions.*;
import org.apache.hadoop.conf.Configuration;
import java.util.Iterator;
import java.util.NoSuchElementException;
public class TestOptionsParser {
@Test
public void testParseIgnoreFailure() {
DistCpOptions options = OptionsParser.parse(new String[] {
"hdfs:
"hdfs:
Assert.assertFalse(options.shouldIgnoreFailures());
options = OptionsParser.parse(new String[]
@Test
public void testParseOverwrite() {
DistCpOptions options = OptionsParser.parse(new String[] {
"hdfs:
"hdfs:
Assert.assertFalse(options.shouldOverwrite());
options = OptionsParser.parse(new String[] {
"-overwrite",
"hdfs:
"hdfs:
Assert.assertTrue(options.shouldOverwrite());
try
@Test
public void testLogPath() {
DistCpOptions options = OptionsParser.parse(new String[] {
"hdfs:
"hdfs:
Assert.assertNull(options.getLogPath());
options = OptionsParser.parse(new String[]
@Test
public void testParseBlokcing() {
DistCpOptions options = OptionsParser.parse(new String[] {
"hdfs:
"hdfs:
Assert.assertTrue(options.shouldBlock());
options = OptionsParser.parse(new String[]
@Test
public void testParsebandwidth() {
DistCpOptions options = OptionsParser.parse(new String[] {
"hdfs:
"hdfs:
Assert.assertEquals(options.getMapBandwidth(), DistCpConstants.DEFAULT_BANDWIDTH_MB);
options = OptionsParser.parse(new String[]
@Test(expected=IllegalArgumentException.class)
public void testParseNonPositiveBandwidth() {
OptionsParser.parse(new String[]
@Test(expected=IllegalArgumentException.class)
public void testParseZeroBandwidth() {
OptionsParser.parse(new String[]
@Test
public void testParseSkipCRC() {
DistCpOptions options = OptionsParser.parse(new String[] {
"hdfs:
"hdfs:
Assert.assertFalse(options.shouldSkipCRC());
options = OptionsParser.parse(new String[]
@Test
public void testParseAtomicCommit() {
DistCpOptions options = OptionsParser.parse(new String[] {
"hdfs:
"hdfs:
Assert.assertFalse(options.shouldAtomicCommit());
options = OptionsParser.parse(new String[] {
"-atomic",
"hdfs:
"hdfs:
Assert.assertTrue(options.shouldAtomicCommit());
try
@Test
public void testParseWorkPath() {
DistCpOptions options = OptionsParser.parse(new String[] {
"hdfs:
"hdfs:
Assert.assertNull(options.getAtomicWorkPath());
options = OptionsParser.parse(new String[] {
"-atomic",
"hdfs:
"hdfs:
Assert.assertNull(options.getAtomicWorkPath());
options = OptionsParser.parse(new String[] {
"-atomic",
"-tmp",
"hdfs:
"hdfs:
"hdfs:
Assert.assertEquals(options.getAtomicWorkPath(), new Path("hdfs:
try
@Test
public void testParseSyncFolders() {
DistCpOptions options = OptionsParser.parse(new String[] {
"hdfs:
"hdfs:
Assert.assertFalse(options.shouldSyncFolder());
options = OptionsParser.parse(new String[]
@Test
public void testParseDeleteMissing() {
DistCpOptions options = OptionsParser.parse(new String[] {
"hdfs:
"hdfs:
Assert.assertFalse(options.shouldDeleteMissing());
options = OptionsParser.parse(new String[] {
"-update",
"-delete",
"hdfs:
"hdfs:
Assert.assertTrue(options.shouldSyncFolder());
Assert.assertTrue(options.shouldDeleteMissing());
options = OptionsParser.parse(new String[] {
"-overwrite",
"-delete",
"hdfs:
"hdfs:
Assert.assertTrue(options.shouldOverwrite());
Assert.assertTrue(options.shouldDeleteMissing());
try
@Test
public void testParseSSLConf() {
DistCpOptions options = OptionsParser.parse(new String[] {
"hdfs:
"hdfs:
Assert.assertNull(options.getSslConfigurationFile());
options = OptionsParser.parse(new String[]
@Test
public void testParseMaps() {
DistCpOptions options = OptionsParser.parse(new String[] {
"hdfs:
"hdfs:
Assert.assertEquals(options.getMaxMaps(), DistCpConstants.DEFAULT_MAPS);
options = OptionsParser.parse(new String[] {
"-m",
"1",
"hdfs:
"hdfs:
Assert.assertEquals(options.getMaxMaps(), 1);
options = OptionsParser.parse(new String[] {
"-m",
"0",
"hdfs:
"hdfs:
Assert.assertEquals(options.getMaxMaps(), 1);
try {
OptionsParser.parse(new String[]  catch (IllegalArgumentException ignore)
try
@Test
public void testSourceListing() {
DistCpOptions options = OptionsParser.parse(new String[]
@Test
public void testSourceListingAndSourcePath() {
try
@Test
public void testMissingSourceInfo() {
try
@Test
public void testMissingTarget() {
try
@Test
public void testInvalidArgs() {
try
@Test
public void testToString()
@Test
public void testCopyStrategy() {
DistCpOptions options = OptionsParser.parse(new String[] {
"-strategy",
"dynamic",
"-f",
"hdfs:
"hdfs:
Assert.assertEquals(options.getCopyStrategy(), "dynamic");
options = OptionsParser.parse(new String[]
@Test
public void testTargetPath() {
DistCpOptions options = OptionsParser.parse(new String[]
@Test
public void testPreserve() {
DistCpOptions options = OptionsParser.parse(new String[] {
"-f",
"hdfs:
"hdfs:
Assert.assertFalse(options.shouldPreserve(FileAttribute.BLOCKSIZE));
Assert.assertFalse(options.shouldPreserve(FileAttribute.REPLICATION));
Assert.assertFalse(options.shouldPreserve(FileAttribute.PERMISSION));
Assert.assertFalse(options.shouldPreserve(FileAttribute.USER));
Assert.assertFalse(options.shouldPreserve(FileAttribute.GROUP));
Assert.assertFalse(options.shouldPreserve(FileAttribute.CHECKSUMTYPE));
options = OptionsParser.parse(new String[] {
"-p",
"-f",
"hdfs:
"hdfs:
Assert.assertTrue(options.shouldPreserve(FileAttribute.BLOCKSIZE));
Assert.assertTrue(options.shouldPreserve(FileAttribute.REPLICATION));
Assert.assertTrue(options.shouldPreserve(FileAttribute.PERMISSION));
Assert.assertTrue(options.shouldPreserve(FileAttribute.USER));
Assert.assertTrue(options.shouldPreserve(FileAttribute.GROUP));
Assert.assertTrue(options.shouldPreserve(FileAttribute.CHECKSUMTYPE));
Assert.assertFalse(options.shouldPreserve(FileAttribute.ACL));
Assert.assertFalse(options.shouldPreserve(FileAttribute.XATTR));
options = OptionsParser.parse(new String[] {
"-p",
"hdfs:
"hdfs:
Assert.assertTrue(options.shouldPreserve(FileAttribute.BLOCKSIZE));
Assert.assertTrue(options.shouldPreserve(FileAttribute.REPLICATION));
Assert.assertTrue(options.shouldPreserve(FileAttribute.PERMISSION));
Assert.assertTrue(options.shouldPreserve(FileAttribute.USER));
Assert.assertTrue(options.shouldPreserve(FileAttribute.GROUP));
Assert.assertTrue(options.shouldPreserve(FileAttribute.CHECKSUMTYPE));
Assert.assertFalse(options.shouldPreserve(FileAttribute.ACL));
Assert.assertFalse(options.shouldPreserve(FileAttribute.XATTR));
options = OptionsParser.parse(new String[] {
"-pbr",
"-f",
"hdfs:
"hdfs:
Assert.assertTrue(options.shouldPreserve(FileAttribute.BLOCKSIZE));
Assert.assertTrue(options.shouldPreserve(FileAttribute.REPLICATION));
Assert.assertFalse(options.shouldPreserve(FileAttribute.PERMISSION));
Assert.assertFalse(options.shouldPreserve(FileAttribute.USER));
Assert.assertFalse(options.shouldPreserve(FileAttribute.GROUP));
Assert.assertFalse(options.shouldPreserve(FileAttribute.CHECKSUMTYPE));
Assert.assertFalse(options.shouldPreserve(FileAttribute.ACL));
Assert.assertFalse(options.shouldPreserve(FileAttribute.XATTR));
options = OptionsParser.parse(new String[] {
"-pbrgup",
"-f",
"hdfs:
"hdfs:
Assert.assertTrue(options.shouldPreserve(FileAttribute.BLOCKSIZE));
Assert.assertTrue(options.shouldPreserve(FileAttribute.REPLICATION));
Assert.assertTrue(options.shouldPreserve(FileAttribute.PERMISSION));
Assert.assertTrue(options.shouldPreserve(FileAttribute.USER));
Assert.assertTrue(options.shouldPreserve(FileAttribute.GROUP));
Assert.assertFalse(options.shouldPreserve(FileAttribute.CHECKSUMTYPE));
Assert.assertFalse(options.shouldPreserve(FileAttribute.ACL));
Assert.assertFalse(options.shouldPreserve(FileAttribute.XATTR));
options = OptionsParser.parse(new String[] {
"-pbrgupcaxt",
"-f",
"hdfs:
"hdfs:
Assert.assertTrue(options.shouldPreserve(FileAttribute.BLOCKSIZE));
Assert.assertTrue(options.shouldPreserve(FileAttribute.REPLICATION));
Assert.assertTrue(options.shouldPreserve(FileAttribute.PERMISSION));
Assert.assertTrue(options.shouldPreserve(FileAttribute.USER));
Assert.assertTrue(options.shouldPreserve(FileAttribute.GROUP));
Assert.assertTrue(options.shouldPreserve(FileAttribute.CHECKSUMTYPE));
Assert.assertTrue(options.shouldPreserve(FileAttribute.ACL));
Assert.assertTrue(options.shouldPreserve(FileAttribute.XATTR));
Assert.assertTrue(options.shouldPreserve(FileAttribute.TIMES));
options = OptionsParser.parse(new String[] {
"-pc",
"-f",
"hdfs:
"hdfs:
Assert.assertFalse(options.shouldPreserve(FileAttribute.BLOCKSIZE));
Assert.assertFalse(options.shouldPreserve(FileAttribute.REPLICATION));
Assert.assertFalse(options.shouldPreserve(FileAttribute.PERMISSION));
Assert.assertFalse(options.shouldPreserve(FileAttribute.USER));
Assert.assertFalse(options.shouldPreserve(FileAttribute.GROUP));
Assert.assertTrue(options.shouldPreserve(FileAttribute.CHECKSUMTYPE));
Assert.assertFalse(options.shouldPreserve(FileAttribute.ACL));
Assert.assertFalse(options.shouldPreserve(FileAttribute.XATTR));
options = OptionsParser.parse(new String[] {
"-p",
"-f",
"hdfs:
"hdfs:
int i = 0;
Iterator<FileAttribute> attribIterator = options.preserveAttributes();
while (attribIterator.hasNext())
Assert.assertEquals(i, DistCpOptionSwitch.PRESERVE_STATUS_DEFAULT.length() - 2);
try {
OptionsParser.parse(new String[]
catch (IllegalArgumentException ignore)
catch (NoSuchElementException ignore)
options = OptionsParser.parse(new String[]
@Test
public void testOptionsSwitchAddToConf()
@Test
public void testOptionsAppendToConf() {
Configuration conf = new Configuration();
Assert.assertFalse(conf.getBoolean(DistCpOptionSwitch.IGNORE_FAILURES.getConfigLabel(), false));
Assert.assertFalse(conf.getBoolean(DistCpOptionSwitch.ATOMIC_COMMIT.getConfigLabel(), false));
DistCpOptions options = OptionsParser.parse(new String[] {
"-atomic",
"-i",
"hdfs:
"hdfs:
options.appendToConf(conf);
Assert.assertTrue(conf.getBoolean(DistCpOptionSwitch.IGNORE_FAILURES.getConfigLabel(), false));
Assert.assertTrue(conf.getBoolean(DistCpOptionSwitch.ATOMIC_COMMIT.getConfigLabel(), false));
Assert.assertEquals(conf.getInt(DistCpOptionSwitch.BANDWIDTH.getConfigLabel(), -1),
DistCpConstants.DEFAULT_BANDWIDTH_MB);
conf = new Configuration();
Assert.assertFalse(conf.getBoolean(DistCpOptionSwitch.SYNC_FOLDERS.getConfigLabel(), false));
Assert.assertFalse(conf.getBoolean(DistCpOptionSwitch.DELETE_MISSING.getConfigLabel(), false));
Assert.assertEquals(conf.get(DistCpOptionSwitch.PRESERVE_STATUS.getConfigLabel()), null);
options = OptionsParser.parse(new String[]
@Test
public void testAppendOption() {
Configuration conf = new Configuration();
Assert.assertFalse(conf.getBoolean(
DistCpOptionSwitch.APPEND.getConfigLabel(), false));
Assert.assertFalse(conf.getBoolean(
DistCpOptionSwitch.SYNC_FOLDERS.getConfigLabel(), false));
DistCpOptions options = OptionsParser.parse(new String[] { "-update",
"-append", "hdfs:
"hdfs:
options.appendToConf(conf);
Assert.assertTrue(conf.getBoolean(
DistCpOptionSwitch.APPEND.getConfigLabel(), false));
Assert.assertTrue(conf.getBoolean(
DistCpOptionSwitch.SYNC_FOLDERS.getConfigLabel(), false));
try {
OptionsParser.parse(new String[]  catch (IllegalArgumentException e)
try
@Test
public void testDiffOption() {
Configuration conf = new Configuration();
Assert.assertFalse(conf.getBoolean(DistCpOptionSwitch.DIFF.getConfigLabel(),
false));
DistCpOptions options = OptionsParser.parse(new String[] { "-update",
"-delete", "-diff", "s1", "s2",
"hdfs:
"hdfs:
options.appendToConf(conf);
Assert.assertTrue(conf.getBoolean(DistCpOptionSwitch.DIFF.getConfigLabel(), false));
Assert.assertTrue(options.shouldUseDiff());
Assert.assertEquals("s1", options.getFromSnapshot());
Assert.assertEquals("s2", options.getToSnapshot());
options = OptionsParser.parse(new String[] {
"-delete", "-diff", "s1", ".", "-update",
"hdfs:
"hdfs:
options.appendToConf(conf);
Assert.assertTrue(conf.getBoolean(DistCpOptionSwitch.DIFF.getConfigLabel(),
false));
Assert.assertTrue(options.shouldUseDiff());
Assert.assertEquals("s1", options.getFromSnapshot());
Assert.assertEquals(".", options.getToSnapshot());
try {
OptionsParser.parse(new String[]  catch (IllegalArgumentException e)
try {
OptionsParser.parse(new String[]  catch (IllegalArgumentException e)
try
