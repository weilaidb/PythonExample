package org.apache.hadoop.streaming;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.DataInputStream;
import java.io.OutputStreamWriter;
import java.io.PrintStream;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.streaming.DumpTypedBytes;
import org.apache.hadoop.typedbytes.TypedBytesInput;
import org.junit.Test;
import static org.junit.Assert.*;
public class TestDumpTypedBytes
