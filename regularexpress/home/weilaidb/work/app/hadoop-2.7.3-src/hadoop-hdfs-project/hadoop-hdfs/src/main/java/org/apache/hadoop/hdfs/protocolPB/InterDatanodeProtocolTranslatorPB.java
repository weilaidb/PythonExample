package org.apache.hadoop.hdfs.protocolPB;
import java.io.Closeable;
import java.io.IOException;
import java.net.InetSocketAddress;
import javax.net.SocketFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.hdfs.protocol.ExtendedBlock;
import org.apache.hadoop.hdfs.protocol.proto.HdfsProtos.BlockProto;
import org.apache.hadoop.hdfs.protocol.proto.InterDatanodeProtocolProtos.InitReplicaRecoveryRequestProto;
import org.apache.hadoop.hdfs.protocol.proto.InterDatanodeProtocolProtos.InitReplicaRecoveryResponseProto;
import org.apache.hadoop.hdfs.protocol.proto.InterDatanodeProtocolProtos.UpdateReplicaUnderRecoveryRequestProto;
import org.apache.hadoop.hdfs.server.protocol.BlockRecoveryCommand.RecoveringBlock;
import org.apache.hadoop.hdfs.server.protocol.InterDatanodeProtocol;
import org.apache.hadoop.hdfs.server.protocol.ReplicaRecoveryInfo;
import org.apache.hadoop.ipc.ProtobufHelper;
import org.apache.hadoop.ipc.ProtobufRpcEngine;
import org.apache.hadoop.ipc.ProtocolMetaInterface;
import org.apache.hadoop.ipc.RPC;
import org.apache.hadoop.ipc.RpcClientUtil;
import org.apache.hadoop.security.UserGroupInformation;
import com.google.protobuf.RpcController;
import com.google.protobuf.ServiceException;
@InterfaceAudience.Private
@InterfaceStability.Stable
public class InterDatanodeProtocolTranslatorPB implements
ProtocolMetaInterface, InterDatanodeProtocol, Closeable
