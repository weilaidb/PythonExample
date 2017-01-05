package org.apache.hadoop.hdfs.server.namenode;
import java.io.DataOutputStream;
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.nio.ByteBuffer;
import java.nio.channels.FileChannel;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.protocol.LayoutFlags;
import org.apache.hadoop.io.IOUtils;
import com.google.common.annotations.VisibleForTesting;
@InterfaceAudience.Private
public class EditLogFileOutputStream extends EditLogOutputStream
