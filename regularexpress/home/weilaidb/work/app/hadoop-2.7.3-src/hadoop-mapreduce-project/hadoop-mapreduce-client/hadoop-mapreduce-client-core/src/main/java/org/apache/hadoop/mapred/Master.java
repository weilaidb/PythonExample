package org.apache.hadoop.mapred;
import java.io.IOException;
import java.net.InetSocketAddress;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Unstable;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.mapreduce.MRConfig;
import org.apache.hadoop.net.NetUtils;
import org.apache.hadoop.security.SecurityUtil;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
@Private
@Unstable
public class Master
