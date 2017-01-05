package org.apache.hadoop.hdfs.protocol.datatransfer;
import java.io.Closeable;
import java.io.DataOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.nio.ByteBuffer;
import java.nio.channels.ReadableByteChannel;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.util.DirectBufferPool;
import org.apache.hadoop.io.IOUtils;
import com.google.common.base.Preconditions;
import com.google.common.primitives.Ints;
@InterfaceAudience.Private
public class PacketReceiver implements Closeable
