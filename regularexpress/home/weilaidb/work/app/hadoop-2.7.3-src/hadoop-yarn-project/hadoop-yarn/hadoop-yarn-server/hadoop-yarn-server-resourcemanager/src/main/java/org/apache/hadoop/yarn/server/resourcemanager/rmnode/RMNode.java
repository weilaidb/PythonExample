package org.apache.hadoop.yarn.server.resourcemanager.rmnode;
import java.util.List;
import java.util.Set;
import org.apache.hadoop.net.Node;
import org.apache.hadoop.yarn.api.records.ApplicationId;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.api.records.NodeId;
import org.apache.hadoop.yarn.api.records.NodeState;
import org.apache.hadoop.yarn.api.records.Resource;
import org.apache.hadoop.yarn.server.api.protocolrecords.NodeHeartbeatResponse;
public interface RMNode
