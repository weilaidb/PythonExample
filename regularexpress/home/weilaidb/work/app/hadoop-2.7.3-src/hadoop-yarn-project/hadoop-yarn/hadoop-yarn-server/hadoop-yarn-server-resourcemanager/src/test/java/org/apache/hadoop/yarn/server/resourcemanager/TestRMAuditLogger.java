package org.apache.hadoop.yarn.server.resourcemanager;
import static org.junit.Assert.assertEquals;
import static org.mockito.Mockito.mock;
import static org.mockito.Mockito.when;
import java.net.InetAddress;
import java.net.InetSocketAddress;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.ipc.RPC;
import org.apache.hadoop.ipc.Server;
import org.apache.hadoop.ipc.TestRPC.TestImpl;
import org.apache.hadoop.ipc.TestRPC.TestProtocol;
import org.apache.hadoop.net.NetUtils;
import org.apache.hadoop.yarn.api.records.ApplicationAttemptId;
import org.apache.hadoop.yarn.api.records.ApplicationId;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.server.resourcemanager.RMAuditLogger.Keys;
import org.junit.Before;
import org.junit.Test;
public class TestRMAuditLogger
