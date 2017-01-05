package org.apache.hadoop.ipc.protocolPB;
import java.io.IOException;
import org.apache.hadoop.ipc.RefreshCallQueueProtocol;
import org.apache.hadoop.ipc.proto.RefreshCallQueueProtocolProtos.RefreshCallQueueRequestProto;
import org.apache.hadoop.ipc.proto.RefreshCallQueueProtocolProtos.RefreshCallQueueResponseProto;
import com.google.protobuf.RpcController;
import com.google.protobuf.ServiceException;
public class RefreshCallQueueProtocolServerSideTranslatorPB implements
RefreshCallQueueProtocolPB
