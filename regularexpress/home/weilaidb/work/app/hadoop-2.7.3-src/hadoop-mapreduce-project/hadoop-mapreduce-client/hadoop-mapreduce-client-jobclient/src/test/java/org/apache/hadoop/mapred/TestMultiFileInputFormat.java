package org.apache.hadoop.mapred;
import java.io.IOException;
import java.util.BitSet;
import java.util.HashMap;
import java.util.Random;
import junit.framework.TestCase;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.fs.FSDataOutputStream;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.Text;
public class TestMultiFileInputFormat extends TestCase
