package org.apache.hadoop.hdfs.net;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.hdfs.protocol.datatransfer.IOStreamPair;
import org.apache.hadoop.net.unix.DomainSocket;
import java.io.InputStream;
import java.io.OutputStream;
import java.nio.channels.ReadableByteChannel;
@InterfaceAudience.Private
public class EncryptedPeer implements Peer
