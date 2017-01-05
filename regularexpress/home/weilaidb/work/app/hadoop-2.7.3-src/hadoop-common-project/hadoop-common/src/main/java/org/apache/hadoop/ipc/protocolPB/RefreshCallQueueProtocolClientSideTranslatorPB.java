package org.apache.hadoop.ipc.protocolPB;
import java.io.Closeable;
import java.io.IOException;
import org.apache.hadoop.ipc.ProtobufHelper;
import org.apache.hadoop.ipc.ProtocolMetaInterface;
import org.apache.hadoop.ipc.RPC;
import org.apache.hadoop.ipc.RpcClientUtil;
import org.apache.hadoop.ipc.RefreshCallQueueProtocol;
import org.apache.hadoop.ipc.proto.RefreshCallQueueProtocolProtos.RefreshCallQueueRequestProto;
import org.apache.hadoop.ipc.protocolPB.RefreshCallQueueProtocolPB;
import com.google.protobuf.RpcController;
import com.google.protobuf.ServiceException;
public class RefreshCallQueueProtocolClientSideTranslatorPB implements
ProtocolMetaInterface, RefreshCallQueueProtocol, Closeable
