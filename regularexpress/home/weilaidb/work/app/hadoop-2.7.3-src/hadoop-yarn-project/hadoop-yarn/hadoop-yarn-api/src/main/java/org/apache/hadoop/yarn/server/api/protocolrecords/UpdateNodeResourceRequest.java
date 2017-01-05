package org.apache.hadoop.yarn.server.api.protocolrecords;
import java.util.Map;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Evolving;
import org.apache.hadoop.yarn.api.records.NodeId;
import org.apache.hadoop.yarn.api.records.ResourceOption;
import org.apache.hadoop.yarn.server.api.ResourceManagerAdministrationProtocol;
import org.apache.hadoop.yarn.util.Records;
@Public
@Evolving
public abstract class UpdateNodeResourceRequest
