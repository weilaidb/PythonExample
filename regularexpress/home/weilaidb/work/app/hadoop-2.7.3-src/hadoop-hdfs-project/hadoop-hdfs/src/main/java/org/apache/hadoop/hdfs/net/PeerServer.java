package org.apache.hadoop.hdfs.net;
import java.io.Closeable;
import org.apache.hadoop.classification.InterfaceAudience;
import java.io.IOException;
import java.net.SocketTimeoutException;
@InterfaceAudience.Private
public interface PeerServer extends Closeable
