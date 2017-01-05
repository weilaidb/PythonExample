package org.apache.hadoop.tools;
import static org.junit.Assert.*;
import java.io.ByteArrayOutputStream;
import java.io.PipedInputStream;
import java.io.PipedOutputStream;
import java.io.PrintStream;
import org.apache.hadoop.hdfs.tools.DFSAdmin;
import org.apache.hadoop.hdfs.tools.DelegationTokenFetcher;
import org.apache.hadoop.hdfs.tools.JMXGet;
import org.apache.hadoop.util.ExitUtil;
import org.apache.hadoop.util.ToolRunner;
import org.apache.hadoop.util.ExitUtil.ExitException;
import org.junit.BeforeClass;
import org.junit.Test;
import com.google.common.collect.ImmutableSet;
import com.google.common.io.ByteStreams;
public class TestTools
