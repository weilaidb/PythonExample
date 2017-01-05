package org.apache.hadoop.hdfs;
import static org.junit.Assert.assertEquals;
import java.io.IOException;
import java.util.ArrayList;
import org.apache.hadoop.fs.FSDataOutputStream;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.hdfs.server.blockmanagement.DatanodeDescriptor;
import org.apache.hadoop.hdfs.server.blockmanagement.DatanodeManager;
import org.junit.After;
import org.junit.Test;
public class TestBlocksScheduledCounter
