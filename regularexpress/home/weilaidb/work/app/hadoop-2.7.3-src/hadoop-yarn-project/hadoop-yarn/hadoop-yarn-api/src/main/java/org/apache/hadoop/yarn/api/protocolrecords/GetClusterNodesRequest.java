package org.apache.hadoop.yarn.api.protocolrecords;
import java.util.EnumSet;
import org.apache.hadoop.classification.InterfaceAudience.Public;
import org.apache.hadoop.classification.InterfaceStability.Stable;
import org.apache.hadoop.yarn.api.ApplicationClientProtocol;
import org.apache.hadoop.yarn.api.records.NodeState;
import org.apache.hadoop.yarn.util.Records;
@Public
@Stable
public abstract class GetClusterNodesRequest
