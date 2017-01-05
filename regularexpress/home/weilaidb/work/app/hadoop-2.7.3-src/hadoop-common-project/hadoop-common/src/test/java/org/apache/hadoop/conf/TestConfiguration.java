package org.apache.hadoop.conf;
import java.io.BufferedWriter;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.FileOutputStream;
import java.io.FileWriter;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStreamWriter;
import java.io.StringWriter;
import java.net.InetAddress;
import java.net.InetSocketAddress;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Random;
import java.util.Set;
import java.util.regex.Pattern;
import static java.util.concurrent.TimeUnit.*;
import junit.framework.TestCase;
import static org.junit.Assert.assertArrayEquals;
import org.apache.commons.lang.StringUtils;
import org.apache.hadoop.conf.Configuration.IntegerRanges;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.IOUtils;
import org.apache.hadoop.net.NetUtils;
import static org.apache.hadoop.util.PlatformName.IBM_JAVA;
import static org.junit.Assert.fail;
import org.codehaus.jackson.map.ObjectMapper;
public class TestConfiguration extends TestCase {
private Configuration conf;
final static String CONFIG = new File("./test-config-TestConfiguration.xml").getAbsolutePath();
final static String CONFIG2 = new File("./test-config2-TestConfiguration.xml").getAbsolutePath();
final static String CONFIG_FOR_ENUM = new File("./test-config-enum-TestConfiguration.xml").getAbsolutePath();
private static final String CONFIG_MULTI_BYTE = new File(
"./test-config-multi-byte-TestConfiguration.xml").getAbsolutePath();
private static final String CONFIG_MULTI_BYTE_SAVED = new File(
"./test-config-multi-byte-saved-TestConfiguration.xml").getAbsolutePath();
final static Random RAN = new Random();
final static String XMLHEADER =
IBM_JAVA?"<?xml version=\"1.0\" encoding=\"UTF-8\"?><configuration>":
"<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?><configuration>";
@Override
protected void setUp() throws Exception
@Override
protected void tearDown() throws Exception
private void startConfig() throws IOException
private void endConfig() throws IOException
private void addInclude(String filename) throws IOException
public void testInputStreamResource() throws Exception
public void testMultiByteCharacters() throws IOException
public void testVariableSubstitution() throws IOException {
out=new BufferedWriter(new FileWriter(CONFIG));
startConfig();
declareProperty("my.int", "$", "42");
declareProperty("intvar", "42", "42");
declareProperty("my.base", "/tmp/$", UNSPEC);
declareProperty("my.file", "hello", "hello");
declareProperty("my.suffix", ".txt", ".txt");
declareProperty("my.relfile", "$$", "hello.txt");
declareProperty("my.fullfile", "$/$$", UNSPEC);
declareProperty("my.failsexpand", "a$b", "a$b");
endConfig();
Path fileResource = new Path(CONFIG);
conf.addResource(fileResource);
for (Prop p : props) {
System.out.println("p=" + p.name);
String gotVal = conf.get(p.name);
String gotRawVal = conf.getRaw(p.name);
assertEq(p.val, gotRawVal);
if (p.expectEval == UNSPEC)
assertTrue(conf.getInt("intvar", -1) == 42);
assertTrue(conf.getInt("my.int", -1) == 42);
Map<String, String> results = conf.getValByRegex("^my.*file$");
assertTrue(results.keySet().contains("my.relfile"));
assertTrue(results.keySet().contains("my.fullfile"));
assertTrue(results.keySet().contains("my.file"));
assertEquals(-1, results.get("my.relfile").indexOf("${"));
assertEquals(-1, results.get("my.fullfile").indexOf("${"));
assertEquals(-1, results.get("my.file").indexOf("$
public void testFinalParam() throws IOException
public static void assertEq(Object a, Object b)
static class Prop
final String UNSPEC = null;
ArrayList<Prop> props = new ArrayList<Prop>();
void declareProperty(String name, String val, String expectEval)
throws IOException
void declareProperty(String name, String val, String expectEval,
boolean isFinal)
throws IOException
void appendProperty(String name, String val) throws IOException
void appendProperty(String name, String val, boolean isFinal,
String ... sources)
throws IOException
public void testOverlay() throws IOException
public void testCommentsInValue() throws IOException
public void testTrim() throws IOException
public void testGetLocalPath() throws IOException
public void testGetFile() throws IOException
public void testToString() throws IOException
public void testWriteXml() throws IOException
public void testIncludes() throws Exception
public void testRelativeIncludes() throws Exception
BufferedWriter out;
public void testIntegerRanges()
public void testGetRangeIterator() throws Exception
public void testHexValues() throws IOException
public void testIntegerValues() throws IOException
public void testHumanReadableValues() throws IOException
public void testBooleanValues() throws IOException
public void testFloatValues() throws IOException
public void testDoubleValues() throws IOException
public void testGetClass() throws IOException
public void testGetClasses() throws IOException
public void testGetStringCollection() throws IOException
public void testGetTrimmedStringCollection() throws IOException
private static String[] extractClassNames(Class<?>[] classes)
enum Dingo ;
enum Yak ;
public void testEnum() throws IOException
public void testEnumFromXml() throws IOException
public void testTimeDuration()
public void testPattern() throws IOException
public void testPropertySource() throws IOException
public void testMultiplePropertySource() throws IOException
public void testSocketAddress() throws IOException
public void testSetSocketAddress() throws IOException
public void testUpdateSocketAddress() throws IOException
public void testReload() throws IOException
public void testSize() throws IOException
public void testClear() throws IOException
public static class Fake_ClassLoader extends ClassLoader
public void testClassLoader()
static class JsonConfiguration
static class JsonProperty
public void testGetSetTrimmedNames() throws IOException
public void testDumpConfiguration () throws IOException
public void testDumpConfiguratioWithoutDefaults() throws IOException
public void testGetValByRegex()
public void testSettingValueNull() throws Exception
public void testSettingKeyNull() throws Exception
public void testInvalidSubstitutation()
private static void checkSubDepthException(Configuration configuration,
String key)
public void testIncompleteSubbing() {
Configuration configuration = new Configuration(false);
String key = "test.random.key";
for (String keyExpression : Arrays.asList(
"",
"$",
"{" + key,
"${" + key,
"foo${" + key,
"foo$
