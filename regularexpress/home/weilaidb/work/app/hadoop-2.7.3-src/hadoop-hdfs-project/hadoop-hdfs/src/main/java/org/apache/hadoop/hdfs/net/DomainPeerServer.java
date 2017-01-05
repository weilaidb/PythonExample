package org.apache.hadoop.hdfs.net;
import java.io.IOException;
import java.net.SocketTimeoutException;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.net.unix.DomainSocket;
@InterfaceAudience.Private
public class DomainPeerServer implements PeerServer
