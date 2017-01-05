package org.apache.hadoop.security.alias;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertTrue;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.PrintStream;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.junit.Before;
import org.junit.Test;
public class TestCredShell {
private final ByteArrayOutputStream outContent = new ByteArrayOutputStream();
private final ByteArrayOutputStream errContent = new ByteArrayOutputStream();
private static final File tmpDir =
new File(System.getProperty("test.build.data", "/tmp"), "creds");
private String jceksProvider;
@Before
public void setup() throws Exception
@Test
public void testCredentialSuccessfulLifecycle() throws Exception
@Test
public void testInvalidProvider() throws Exception {
String[] args1 =
@Test
public void testTransientProviderWarning() throws Exception {
String[] args1 =
