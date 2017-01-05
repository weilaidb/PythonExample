package org.apache.hadoop.yarn.client;
import java.io.IOException;
import java.net.InetSocketAddress;
import java.security.PrivilegedAction;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.yarn.ipc.YarnRPC;
@InterfaceAudience.Public
@InterfaceStability.Evolving
@SuppressWarnings("unchecked")
public class AHSProxy<T>
