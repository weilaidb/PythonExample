package org.apache.hadoop.hdfs.server.datanode;
import java.io.IOException;
import java.net.SocketTimeoutException;
import java.nio.channels.AsynchronousCloseException;
import java.util.HashMap;
import org.apache.commons.logging.Log;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.net.Peer;
import org.apache.hadoop.hdfs.net.PeerServer;
import org.apache.hadoop.hdfs.util.DataTransferThrottler;
import org.apache.hadoop.io.IOUtils;
import org.apache.hadoop.util.Daemon;
import com.google.common.annotations.VisibleForTesting;
class DataXceiverServer implements Runnable
