package org.apache.hadoop.yarn.ipc;
import java.net.InetSocketAddress;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.ipc.Server;
import org.apache.hadoop.security.token.SecretManager;
import org.apache.hadoop.security.token.TokenIdentifier;
import org.apache.hadoop.yarn.factory.providers.RpcFactoryProvider;
@InterfaceAudience.LimitedPrivate()
public class HadoopYarnProtoRPC extends YarnRPC
