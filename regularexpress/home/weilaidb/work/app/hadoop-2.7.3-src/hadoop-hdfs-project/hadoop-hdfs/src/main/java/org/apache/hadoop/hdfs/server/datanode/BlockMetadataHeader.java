package org.apache.hadoop.hdfs.server.datanode;
import java.io.BufferedInputStream;
import java.io.ByteArrayInputStream;
import java.io.DataInputStream;
import java.io.DataOutputStream;
import java.io.EOFException;
import java.io.File;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.nio.ByteBuffer;
import java.nio.channels.FileChannel;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.hdfs.protocol.HdfsConstants;
import org.apache.hadoop.io.IOUtils;
import org.apache.hadoop.util.DataChecksum;
import com.google.common.annotations.VisibleForTesting;
@InterfaceAudience.Private
@InterfaceStability.Evolving
public class BlockMetadataHeader
