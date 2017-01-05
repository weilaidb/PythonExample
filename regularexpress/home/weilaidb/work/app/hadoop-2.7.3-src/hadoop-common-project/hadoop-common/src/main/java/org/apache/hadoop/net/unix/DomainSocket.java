package org.apache.hadoop.net.unix;
import java.io.Closeable;
import org.apache.hadoop.classification.InterfaceAudience;
import java.io.FileDescriptor;
import java.io.FileInputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.nio.channels.ClosedChannelException;
import java.nio.channels.ReadableByteChannel;
import java.nio.ByteBuffer;
import org.apache.commons.lang.SystemUtils;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.util.NativeCodeLoader;
import org.apache.hadoop.util.CloseableReferenceCount;
import com.google.common.annotations.VisibleForTesting;
@InterfaceAudience.LimitedPrivate("HDFS")
public class DomainSocket implements Closeable
