package org.apache.hadoop.yarn.client;
import java.io.IOException;
import org.junit.Assert;
import org.apache.hadoop.ipc.RPC;
import org.apache.hadoop.yarn.api.records.NodeId;
import org.apache.hadoop.yarn.api.records.Resource;
import org.apache.hadoop.yarn.server.api.ResourceTracker;
import org.apache.hadoop.yarn.server.api.ServerRMProxy;
import org.apache.hadoop.yarn.server.api.protocolrecords.NodeHeartbeatRequest;
import org.apache.hadoop.yarn.server.api.protocolrecords.RegisterNodeManagerRequest;
import org.apache.hadoop.yarn.server.api.records.NodeStatus;
import org.apache.hadoop.yarn.util.YarnVersionInfo;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;
public class TestResourceTrackerOnHA extends ProtocolHATestBase
