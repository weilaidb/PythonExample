package org.apache.hadoop.hdfs.net;
import java.io.Closeable;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.nio.channels.ReadableByteChannel;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.net.unix.DomainSocket;
@InterfaceAudience.Private
public interface Peer extends Closeable
