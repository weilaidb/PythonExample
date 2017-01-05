package org.apache.hadoop.hdfs.protocolPB;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.hdfs.protocol.proto.InterDatanodeProtocolProtos.InitReplicaRecoveryRequestProto;
import org.apache.hadoop.hdfs.protocol.proto.InterDatanodeProtocolProtos.InitReplicaRecoveryResponseProto;
import org.apache.hadoop.hdfs.protocol.proto.InterDatanodeProtocolProtos.UpdateReplicaUnderRecoveryRequestProto;
import org.apache.hadoop.hdfs.protocol.proto.InterDatanodeProtocolProtos.UpdateReplicaUnderRecoveryResponseProto;
import org.apache.hadoop.hdfs.server.protocol.BlockRecoveryCommand.RecoveringBlock;
import org.apache.hadoop.hdfs.server.protocol.InterDatanodeProtocol;
import org.apache.hadoop.hdfs.server.protocol.ReplicaRecoveryInfo;
import com.google.protobuf.RpcController;
import com.google.protobuf.ServiceException;
@InterfaceAudience.Private
public class InterDatanodeProtocolServerSideTranslatorPB implements
InterDatanodeProtocolPB
