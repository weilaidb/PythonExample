package org.apache.hadoop.hdfs.net;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.nio.channels.ReadableByteChannel;
import org.apache.hadoop.net.unix.DomainSocket;
import org.apache.hadoop.classification.InterfaceAudience;
@InterfaceAudience.Private
public class DomainPeer implements Peer
