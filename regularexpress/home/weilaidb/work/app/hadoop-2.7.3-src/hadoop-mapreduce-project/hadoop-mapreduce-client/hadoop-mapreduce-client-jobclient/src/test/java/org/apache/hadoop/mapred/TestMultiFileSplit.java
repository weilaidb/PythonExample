package org.apache.hadoop.mapred;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.OutputStream;
import java.util.Arrays;
import junit.framework.TestCase;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.IOUtils;
public class TestMultiFileSplit extends TestCase
