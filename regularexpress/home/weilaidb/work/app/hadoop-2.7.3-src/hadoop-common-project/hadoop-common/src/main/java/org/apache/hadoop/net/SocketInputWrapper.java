package org.apache.hadoop.net;
import java.io.FilterInputStream;
import java.io.InputStream;
import java.net.Socket;
import java.net.SocketException;
import java.nio.channels.ReadableByteChannel;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import com.google.common.base.Preconditions;
@InterfaceAudience.LimitedPrivate("HDFS")
@InterfaceStability.Unstable
public class SocketInputWrapper extends FilterInputStream
