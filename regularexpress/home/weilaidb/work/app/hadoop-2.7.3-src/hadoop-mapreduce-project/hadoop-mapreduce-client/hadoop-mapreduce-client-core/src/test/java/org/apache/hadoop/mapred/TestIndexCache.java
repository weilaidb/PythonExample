package org.apache.hadoop.mapred;
import java.io.DataOutputStream;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.util.Random;
import java.util.zip.CRC32;
import java.util.zip.CheckedOutputStream;
import org.apache.hadoop.fs.ChecksumException;
import org.apache.hadoop.fs.FileStatus;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.fs.FSDataOutputStream;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.mapreduce.server.tasktracker.TTConfig;
import junit.framework.TestCase;
public class TestIndexCache extends TestCase
