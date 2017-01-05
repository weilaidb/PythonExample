package org.apache.hadoop.hdfs.server.namenode;
import java.io.IOException;
import java.net.InetSocketAddress;
import java.net.SocketTimeoutException;
import java.net.URL;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.ha.ServiceFailedException;
import org.apache.hadoop.hdfs.DFSConfigKeys;
import org.apache.hadoop.hdfs.DFSUtil;
import org.apache.hadoop.hdfs.NameNodeProxies;
import org.apache.hadoop.hdfs.protocol.HdfsConstants;
import org.apache.hadoop.hdfs.protocol.HdfsConstants.SafeModeAction;
import org.apache.hadoop.hdfs.protocol.UnregisteredNodeException;
import org.apache.hadoop.hdfs.protocol.proto.JournalProtocolProtos.JournalProtocolService;
import org.apache.hadoop.hdfs.protocolPB.JournalProtocolPB;
import org.apache.hadoop.hdfs.protocolPB.JournalProtocolServerSideTranslatorPB;
import org.apache.hadoop.hdfs.server.blockmanagement.BlockManager;
import org.apache.hadoop.hdfs.server.common.HdfsServerConstants.NamenodeRole;
import org.apache.hadoop.hdfs.server.common.HdfsServerConstants.StartupOption;
import org.apache.hadoop.hdfs.server.common.Storage;
import org.apache.hadoop.hdfs.server.namenode.ha.HAState;
import org.apache.hadoop.hdfs.server.protocol.FenceResponse;
import org.apache.hadoop.hdfs.server.protocol.JournalInfo;
import org.apache.hadoop.hdfs.server.protocol.JournalProtocol;
import org.apache.hadoop.hdfs.server.protocol.NamenodeProtocol;
import org.apache.hadoop.hdfs.server.protocol.NamenodeRegistration;
import org.apache.hadoop.hdfs.server.protocol.NamespaceInfo;
import org.apache.hadoop.ipc.RPC;
import org.apache.hadoop.ipc.StandbyException;
import org.apache.hadoop.net.NetUtils;
import org.apache.hadoop.security.UserGroupInformation;
import com.google.protobuf.BlockingService;
@InterfaceAudience.Private
public class BackupNode extends NameNode
boolean shouldCheckpointAtStartup()
private NamespaceInfo handshake(Configuration conf) throws IOException
private void runCheckpointDaemon(Configuration conf) throws IOException
void doCheckpoint() throws IOException
private void registerWith(NamespaceInfo nsInfo) throws IOException
private static NamespaceInfo handshake(NamenodeProtocol namenode)
throws IOException, SocketTimeoutException
@Override
protected String getNameServiceId(Configuration conf)
@Override
protected HAState createHAState(StartupOption startOpt)
@Override
protected NameNodeHAContext createHAContext()
private class BNHAContext extends NameNodeHAContext
}
