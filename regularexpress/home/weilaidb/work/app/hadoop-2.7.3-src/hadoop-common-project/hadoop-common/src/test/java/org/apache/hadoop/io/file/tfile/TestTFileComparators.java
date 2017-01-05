package org.apache.hadoop.io.file.tfile;
import java.io.IOException;
import org.junit.Assert;
import junit.framework.TestCase;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FSDataOutputStream;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.file.tfile.TFile.Writer;
public class TestTFileComparators extends TestCase
