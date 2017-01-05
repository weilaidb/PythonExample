package org.apache.hadoop.fs;
import static org.apache.hadoop.fs.CommonConfigurationKeys.*;
import static org.apache.hadoop.fs.FileSystemTestHelper.*;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.IOException;
import java.io.PrintStream;
import java.net.URI;
import java.text.DateFormat;
import java.text.SimpleDateFormat;
import java.util.HashSet;
import java.util.Set;
import junit.framework.TestCase;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.util.Time;
public class TestTrash extends TestCase
