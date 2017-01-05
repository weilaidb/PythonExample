package org.apache.hadoop.yarn.server.api;
import java.io.IOException;
import java.net.InetSocketAddress;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.yarn.client.RMProxy;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import com.google.common.base.Preconditions;
public class ServerRMProxy<T> extends RMProxy<T>
