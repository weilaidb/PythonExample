package org.apache.hadoop.hdfs.protocol.datatransfer;
import java.net.InetAddress;
import java.net.UnknownHostException;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.protocol.datatransfer.TrustedChannelResolver;
import org.apache.hadoop.util.CombinedIPWhiteList;
public class WhitelistBasedTrustedChannelResolver  extends TrustedChannelResolver
