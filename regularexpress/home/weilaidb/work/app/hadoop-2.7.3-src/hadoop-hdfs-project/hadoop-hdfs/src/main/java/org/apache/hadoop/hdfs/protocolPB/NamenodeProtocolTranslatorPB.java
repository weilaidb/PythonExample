package org.apache.hadoop.hdfs.protocolPB;
import java.io.Closeable;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.hdfs.protocol.DatanodeID;
import org.apache.hadoop.hdfs.protocol.DatanodeInfo;
import org.apache.hadoop.hdfs.protocol.proto.HdfsProtos.NamenodeCommandProto;
import org.apache.hadoop.hdfs.protocol.proto.HdfsProtos.VersionRequestProto;
import org.apache.hadoop.hdfs.protocol.proto.NamenodeProtocolProtos;
import org.apache.hadoop.hdfs.protocol.proto.NamenodeProtocolProtos.EndCheckpointRequestProto;
import org.apache.hadoop.hdfs.protocol.proto.NamenodeProtocolProtos.ErrorReportRequestProto;
import org.apache.hadoop.hdfs.protocol.proto.NamenodeProtocolProtos.GetBlockKeysRequestProto;
import org.apache.hadoop.hdfs.protocol.proto.NamenodeProtocolProtos.GetBlockKeysResponseProto;
import org.apache.hadoop.hdfs.protocol.proto.NamenodeProtocolProtos.GetBlocksRequestProto;
import org.apache.hadoop.hdfs.protocol.proto.NamenodeProtocolProtos.GetEditLogManifestRequestProto;
import org.apache.hadoop.hdfs.protocol.proto.NamenodeProtocolProtos.GetMostRecentCheckpointTxIdRequestProto;
import org.apache.hadoop.hdfs.protocol.proto.NamenodeProtocolProtos.GetTransactionIdRequestProto;
import org.apache.hadoop.hdfs.protocol.proto.NamenodeProtocolProtos.IsUpgradeFinalizedRequestProto;
import org.apache.hadoop.hdfs.protocol.proto.NamenodeProtocolProtos.IsUpgradeFinalizedResponseProto;
import org.apache.hadoop.hdfs.protocol.proto.NamenodeProtocolProtos.RegisterRequestProto;
import org.apache.hadoop.hdfs.protocol.proto.NamenodeProtocolProtos.RollEditLogRequestProto;
import org.apache.hadoop.hdfs.protocol.proto.NamenodeProtocolProtos.StartCheckpointRequestProto;
import org.apache.hadoop.hdfs.security.token.block.ExportedBlockKeys;
import org.apache.hadoop.hdfs.server.namenode.CheckpointSignature;
import org.apache.hadoop.hdfs.server.protocol.BlocksWithLocations;
import org.apache.hadoop.hdfs.server.protocol.NamenodeCommand;
import org.apache.hadoop.hdfs.server.protocol.NamenodeProtocol;
import org.apache.hadoop.hdfs.server.protocol.NamenodeRegistration;
import org.apache.hadoop.hdfs.server.protocol.NamespaceInfo;
import org.apache.hadoop.hdfs.server.protocol.RemoteEditLogManifest;
import org.apache.hadoop.ipc.ProtobufHelper;
import org.apache.hadoop.ipc.ProtocolMetaInterface;
import org.apache.hadoop.ipc.ProtocolTranslator;
import org.apache.hadoop.ipc.RPC;
import org.apache.hadoop.ipc.RpcClientUtil;
import com.google.protobuf.RpcController;
import com.google.protobuf.ServiceException;
@InterfaceAudience.Private
@InterfaceStability.Stable
public class NamenodeProtocolTranslatorPB implements NamenodeProtocol,
ProtocolMetaInterface, Closeable, ProtocolTranslator
