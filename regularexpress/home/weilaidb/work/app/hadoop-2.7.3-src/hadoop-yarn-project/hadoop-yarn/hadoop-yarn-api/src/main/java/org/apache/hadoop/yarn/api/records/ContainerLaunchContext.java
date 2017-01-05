package org.apache.hadoop.yarn.api.records;
import java.nio.ByteBuffer;
import java.util.List;
import java.util.Map;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Stable;
import org.apache.hadoop.yarn.api.ContainerManagementProtocol;
import org.apache.hadoop.yarn.server.api.ApplicationInitializationContext;
import org.apache.hadoop.yarn.server.api.AuxiliaryService;
import org.apache.hadoop.yarn.util.Records;
@Public
@Stable
public abstract class ContainerLaunchContext
