package org.apache.hadoop.streaming;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.DataOutputStream;
import java.io.InputStream;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.hdfs.MiniDFSCluster;
import org.apache.hadoop.io.SequenceFile;
import org.apache.hadoop.typedbytes.TypedBytesOutput;
import org.apache.hadoop.typedbytes.TypedBytesWritable;
import org.junit.Test;
import static org.junit.Assert.*;
public class TestLoadTypedBytes
