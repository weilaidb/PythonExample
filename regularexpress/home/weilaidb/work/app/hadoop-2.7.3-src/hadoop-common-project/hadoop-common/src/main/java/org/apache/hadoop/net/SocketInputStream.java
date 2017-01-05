package org.apache.hadoop.net;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import java.io.InputStream;
import java.net.Socket;
import java.net.SocketTimeoutException;
import java.nio.ByteBuffer;
import java.nio.channels.FileChannel;
import java.nio.channels.ReadableByteChannel;
import java.nio.channels.SelectableChannel;
import java.nio.channels.SelectionKey;
@InterfaceAudience.LimitedPrivate("HDFS")
public class SocketInputStream extends InputStream
implements ReadableByteChannel
