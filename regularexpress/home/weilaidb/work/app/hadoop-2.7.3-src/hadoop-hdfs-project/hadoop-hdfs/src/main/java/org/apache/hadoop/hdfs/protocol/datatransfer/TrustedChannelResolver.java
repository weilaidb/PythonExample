package org.apache.hadoop.hdfs.protocol.datatransfer;
import java.net.InetAddress;
import org.apache.hadoop.conf.Configurable;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.util.ReflectionUtils;
public class TrustedChannelResolver implements Configurable
