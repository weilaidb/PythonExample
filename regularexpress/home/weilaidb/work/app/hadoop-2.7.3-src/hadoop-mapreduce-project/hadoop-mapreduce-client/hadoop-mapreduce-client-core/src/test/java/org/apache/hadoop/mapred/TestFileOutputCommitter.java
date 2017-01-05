package org.apache.hadoop.mapred;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.net.URI;
import junit.framework.TestCase;
import org.junit.Assert;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.FileUtil;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.RawLocalFileSystem;
import org.apache.hadoop.io.LongWritable;
import org.apache.hadoop.io.MapFile;
import org.apache.hadoop.io.NullWritable;
import org.apache.hadoop.io.Text;
@SuppressWarnings("unchecked")
public class TestFileOutputCommitter extends TestCase
