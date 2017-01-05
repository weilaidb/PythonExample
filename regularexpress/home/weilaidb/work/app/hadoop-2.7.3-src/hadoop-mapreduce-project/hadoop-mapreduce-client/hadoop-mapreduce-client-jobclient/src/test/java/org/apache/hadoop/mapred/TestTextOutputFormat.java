package org.apache.hadoop.mapred;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import org.junit.Test;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.fail;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.compress.DefaultCodec;
import org.apache.hadoop.io.compress.CompressionInputStream;
import org.apache.hadoop.io.NullWritable;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.util.LineReader;
public class TestTextOutputFormat
