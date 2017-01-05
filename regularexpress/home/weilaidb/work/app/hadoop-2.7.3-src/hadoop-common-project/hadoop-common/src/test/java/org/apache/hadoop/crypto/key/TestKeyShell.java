package org.apache.hadoop.crypto.key;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.IOException;
import java.io.PrintStream;
import java.util.UUID;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertTrue;
public class TestKeyShell {
private final ByteArrayOutputStream outContent = new ByteArrayOutputStream();
private final ByteArrayOutputStream errContent = new ByteArrayOutputStream();
private PrintStream initialStdOut;
private PrintStream initialStdErr;
private String jceksProvider;
@Before
public void setup() throws Exception
@After
public void cleanUp() throws Exception
private void deleteKey(KeyShell ks, String keyName) throws Exception
private String listKeys(KeyShell ks, boolean wantMetadata) throws Exception
@Test
public void testKeySuccessfulKeyLifecycle() throws Exception
@Test
public void testKeySuccessfulCreationWithDescription() throws Exception
@Test
public void testInvalidKeySize() throws Exception
@Test
public void testInvalidCipher() throws Exception
@Test
public void testInvalidProvider() throws Exception {
final String[] args1 =
@Test
public void testTransientProviderWarning() throws Exception
