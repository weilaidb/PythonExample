package org.apache.hadoop.util;
import java.util.Locale;
import static org.apache.hadoop.util.StringUtils.TraditionalBinaryPrefix.long2String;
import static org.apache.hadoop.util.StringUtils.TraditionalBinaryPrefix.string2long;
import static org.junit.Assert.assertArrayEquals;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertNotEquals;
import static org.junit.Assert.assertTrue;
import static org.junit.Assert.fail;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.regex.Pattern;
import org.apache.hadoop.test.UnitTestcaseTimeLimit;
import org.apache.hadoop.util.StringUtils.TraditionalBinaryPrefix;
import org.junit.Test;
public class TestStringUtils extends UnitTestcaseTimeLimit {
final private static String NULL_STR = null;
final private static String EMPTY_STR = "";
final private static String STR_WO_SPECIAL_CHARS = "AB";
final private static String STR_WITH_COMMA = "A,B";
final private static String ESCAPED_STR_WITH_COMMA = "A\\,B";
final private static String STR_WITH_ESCAPE = "AB\\";
final private static String ESCAPED_STR_WITH_ESCAPE = "AB\\\\";
final private static String STR_WITH_BOTH2 = ",A\\,,B\\\\,";
final private static String ESCAPED_STR_WITH_BOTH2 =
"\\,A\\\\\\,\\,B\\\\\\\\\\,";
@Test (timeout = 30000)
public void testEscapeString() throws Exception
@Test (timeout = 30000)
public void testSplit() throws Exception
@Test (timeout = 30000)
public void testSimpleSplit() throws Exception {
final String[] TO_TEST =
@Test (timeout = 30000)
public void testUnescapeString() throws Exception
@Test (timeout = 30000)
public void testTraditionalBinaryPrefix() throws Exception
@Test (timeout = 30000)
public void testJoin()
@Test (timeout = 30000)
public void testGetTrimmedStrings() throws Exception
@Test (timeout = 30000)
public void testCamelize()
@Test (timeout = 30000)
public void testStringToURI()
