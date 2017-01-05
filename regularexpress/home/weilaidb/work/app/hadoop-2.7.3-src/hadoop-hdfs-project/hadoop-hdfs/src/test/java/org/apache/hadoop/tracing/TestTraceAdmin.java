package org.apache.hadoop.tracing;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.net.unix.TemporarySocketDirectory;
import org.junit.Assert;
import org.junit.Test;
import java.io.ByteArrayOutputStream;
import java.io.File;
import java.io.PrintStream;
public class TestTraceAdmin
