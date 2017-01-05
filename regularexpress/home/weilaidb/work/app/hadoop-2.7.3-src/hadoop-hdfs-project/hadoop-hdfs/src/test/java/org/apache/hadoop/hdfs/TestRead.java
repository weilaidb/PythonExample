package org.apache.hadoop.hdfs;
import java.io.FileNotFoundException;
import java.io.IOException;
import java.nio.ByteBuffer;
import org.junit.Assert;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FSDataInputStream;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.hdfs.DFSTestUtil.ShortCircuitTestContext;
import org.junit.Test;
public class TestRead
