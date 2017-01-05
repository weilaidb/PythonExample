package org.apache.hadoop.ipc;
import org.apache.hadoop.ipc.RPC.Server.VerProtocolImpl;
import org.apache.hadoop.ipc.protobuf.ProtocolInfoProtos.GetProtocolSignatureRequestProto;
import org.apache.hadoop.ipc.protobuf.ProtocolInfoProtos.GetProtocolSignatureResponseProto;
import org.apache.hadoop.ipc.protobuf.ProtocolInfoProtos.GetProtocolVersionsRequestProto;
import org.apache.hadoop.ipc.protobuf.ProtocolInfoProtos.GetProtocolVersionsResponseProto;
import org.apache.hadoop.ipc.protobuf.ProtocolInfoProtos.ProtocolSignatureProto;
import org.apache.hadoop.ipc.protobuf.ProtocolInfoProtos.ProtocolVersionProto;
import com.google.protobuf.RpcController;
import com.google.protobuf.ServiceException;
public class ProtocolMetaInfoServerSideTranslatorPB implements
ProtocolMetaInfoPB
