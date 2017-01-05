package org.apache.hadoop.yarn.client.api.async;
import java.nio.ByteBuffer;
import java.util.Map;
import java.util.concurrent.ConcurrentMap;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Stable;
import org.apache.hadoop.service.AbstractService;
import org.apache.hadoop.yarn.api.records.Container;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.api.records.ContainerLaunchContext;
import org.apache.hadoop.yarn.api.records.ContainerStatus;
import org.apache.hadoop.yarn.api.records.NodeId;
import org.apache.hadoop.yarn.api.records.Token;
import org.apache.hadoop.yarn.client.api.NMClient;
import org.apache.hadoop.yarn.client.api.async.impl.NMClientAsyncImpl;
import org.apache.hadoop.yarn.client.api.impl.NMClientImpl;
import org.apache.hadoop.yarn.conf.YarnConfiguration;
import com.google.common.annotations.VisibleForTesting;
@Public
@Stable
public abstract class NMClientAsync extends AbstractService
