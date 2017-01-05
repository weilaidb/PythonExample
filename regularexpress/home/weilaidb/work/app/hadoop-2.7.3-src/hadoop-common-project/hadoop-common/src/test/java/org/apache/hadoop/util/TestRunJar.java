package org.apache.hadoop.util;
import static org.mockito.Mockito.spy;
import static org.mockito.Mockito.when;
import java.io.BufferedInputStream;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.util.jar.JarOutputStream;
import java.util.regex.Pattern;
import java.util.zip.ZipEntry;
import junit.framework.TestCase;
import org.apache.hadoop.fs.FileUtil;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;
public class TestRunJar extends TestCase
