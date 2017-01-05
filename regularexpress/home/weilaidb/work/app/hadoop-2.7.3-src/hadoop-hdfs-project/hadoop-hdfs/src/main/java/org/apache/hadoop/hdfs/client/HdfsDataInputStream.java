package org.apache.hadoop.hdfs.client;
import java.io.InputStream;
import java.io.IOException;
import java.util.List;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.fs.FSDataInputStream;
import org.apache.hadoop.crypto.CryptoInputStream;
import org.apache.hadoop.hdfs.DFSInputStream;
import org.apache.hadoop.hdfs.protocol.DatanodeInfo;
import org.apache.hadoop.hdfs.protocol.ExtendedBlock;
import org.apache.hadoop.hdfs.protocol.LocatedBlock;
import com.google.common.base.Preconditions;
@InterfaceAudience.Public
@InterfaceStability.Evolving
public class HdfsDataInputStream extends FSDataInputStream
