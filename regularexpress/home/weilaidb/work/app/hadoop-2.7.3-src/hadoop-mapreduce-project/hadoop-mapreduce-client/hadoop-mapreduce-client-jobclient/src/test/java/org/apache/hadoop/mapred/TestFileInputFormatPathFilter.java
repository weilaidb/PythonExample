package org.apache.hadoop.mapred;
import junit.framework.TestCase;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.PathFilter;
import java.io.IOException;
import java.io.Writer;
import java.io.OutputStreamWriter;
import java.util.Set;
import java.util.HashSet;
public class TestFileInputFormatPathFilter extends TestCase
