package org.apache.hadoop.hdfs.nfs.nfs3;
import java.net.DatagramSocket;
import java.net.InetSocketAddress;
import org.apache.commons.daemon.Daemon;
import org.apache.commons.daemon.DaemonContext;
import org.apache.hadoop.hdfs.nfs.conf.NfsConfigKeys;
import org.apache.hadoop.hdfs.nfs.conf.NfsConfiguration;
public class PrivilegedNfsGatewayStarter implements Daemon
