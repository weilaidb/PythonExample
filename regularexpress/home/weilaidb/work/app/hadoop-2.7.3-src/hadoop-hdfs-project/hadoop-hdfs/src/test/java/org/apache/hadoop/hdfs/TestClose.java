package org.apache.hadoop.hdfs;
import static org.junit.Assert.fail;
import java.io.IOException;
import java.io.OutputStream;
import java.nio.channels.ClosedChannelException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.test.GenericTestUtils;
import org.junit.Test;
public class TestClose
