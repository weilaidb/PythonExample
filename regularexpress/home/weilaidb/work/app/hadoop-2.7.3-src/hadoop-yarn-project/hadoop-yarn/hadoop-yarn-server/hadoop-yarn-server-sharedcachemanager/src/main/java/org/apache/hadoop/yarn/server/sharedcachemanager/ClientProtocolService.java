package org.apache.hadoop.yarn.server.sharedcachemanager;
import java.io.IOException;
import java.net.InetSocketAddress;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceStability.Evolving;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.ipc.Server;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.hadoop.service.AbstractService;
import org.apache.hadoop.yarn.api.ClientSCMProtocol;
import org.apache.hadoop.yarn.api.protocolrecords.ReleaseSharedCacheResourceRequest;
import org.apache.hadoop.yarn.api.protocolrecords.ReleaseSharedCacheResourceResponse;
import org.apache.hadoop.yarn.api.protocolrecords.UseSharedCacheResourceRequest;
import org.apache.hadoop.yarn.api.protocolrecords.UseSharedCacheResourceResponse;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import org.apache.hadoop.yarn.exceptions.YarnException;
import org.apache.hadoop.yarn.factories.RecordFactory;
import org.apache.hadoop.yarn.factory.providers.RecordFactoryProvider;
import org.apache.hadoop.yarn.ipc.RPCUtil;
import org.apache.hadoop.yarn.ipc.YarnRPC;
import org.apache.hadoop.yarn.server.sharedcache.SharedCacheUtil;
import org.apache.hadoop.yarn.server.sharedcachemanager.metrics.ClientSCMMetrics;
import org.apache.hadoop.yarn.server.sharedcachemanager.store.SCMStore;
import org.apache.hadoop.yarn.server.sharedcachemanager.store.SharedCacheResourceReference;
@Private
@Evolving
public class ClientProtocolService extends AbstractService implements
ClientSCMProtocol
