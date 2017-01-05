package org.apache.hadoop.hdfs.net;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.net.Socket;
import java.nio.channels.ReadableByteChannel;
import org.apache.hadoop.net.SocketInputStream;
import org.apache.hadoop.net.SocketOutputStream;
import org.apache.hadoop.net.unix.DomainSocket;
class NioInetPeer implements Peer
