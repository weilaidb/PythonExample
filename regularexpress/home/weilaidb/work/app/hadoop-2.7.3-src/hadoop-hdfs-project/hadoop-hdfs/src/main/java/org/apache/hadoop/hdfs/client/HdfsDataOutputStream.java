package org.apache.hadoop.hdfs.client;
import java.io.IOException;
import java.io.OutputStream;
import java.util.EnumSet;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.crypto.CryptoOutputStream;
import org.apache.hadoop.fs.FSDataOutputStream;
import org.apache.hadoop.fs.FileSystem;
import org.apache.hadoop.hdfs.DFSOutputStream;
import com.google.common.base.Preconditions;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public class HdfsDataOutputStream extends FSDataOutputStream
