package org.apache.hadoop.yarn.factories;
import java.net.InetSocketAddress;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.ipc.Server;
import org.apache.hadoop.security.token.SecretManager;
import org.apache.hadoop.security.token.TokenIdentifier;
@InterfaceAudience.LimitedPrivate()
public interface RpcServerFactory
