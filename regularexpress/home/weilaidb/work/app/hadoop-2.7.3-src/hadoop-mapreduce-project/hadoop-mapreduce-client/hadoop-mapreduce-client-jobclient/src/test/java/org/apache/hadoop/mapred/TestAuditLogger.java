package org.apache.hadoop.mapred;
import java.net.InetAddress;
import java.net.InetSocketAddress;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.ipc.ProtocolInfo;
import org.apache.hadoop.ipc.RPC;
import org.apache.hadoop.ipc.Server;
import org.apache.hadoop.ipc.TestRPC.TestImpl;
import org.apache.hadoop.ipc.TestRPC.TestProtocol;
import org.apache.hadoop.mapred.AuditLogger.Keys;
import org.apache.hadoop.net.NetUtils;
import junit.framework.TestCase;
public class TestAuditLogger extends TestCase
