package org.apache.hadoop.hdfs;
import java.io.IOException;
import java.net.InetSocketAddress;
import org.apache.hadoop.hdfs.net.Peer;
import org.apache.hadoop.hdfs.protocol.DatanodeID;
import org.apache.hadoop.hdfs.security.token.block.BlockTokenIdentifier;
import org.apache.hadoop.security.token.Token;
public interface RemotePeerFactory
