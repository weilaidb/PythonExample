package org.apache.hadoop.yarn.client.api;
import java.io.IOException;
import java.nio.ByteBuffer;
import java.util.Map;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.service.AbstractService;
import org.apache.hadoop.yarn.api.records.Container;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.api.records.ContainerLaunchContext;
import org.apache.hadoop.yarn.api.records.ContainerStatus;
import org.apache.hadoop.yarn.api.records.NodeId;
import org.apache.hadoop.yarn.client.api.impl.NMClientImpl;
import org.apache.hadoop.yarn.exceptions.YarnException;
@InterfaceAudience.Public
@InterfaceStability.Stable
public abstract class NMClient extends AbstractService
