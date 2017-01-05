package org.apache.hadoop.tools.protocolPB;
import java.io.Closeable;
import java.io.IOException;
import org.apache.hadoop.ipc.ProtobufHelper;
import org.apache.hadoop.ipc.ProtocolMetaInterface;
import org.apache.hadoop.ipc.RPC;
import org.apache.hadoop.ipc.RpcClientUtil;
import org.apache.hadoop.tools.GetUserMappingsProtocol;
import org.apache.hadoop.tools.proto.GetUserMappingsProtocolProtos.GetGroupsForUserRequestProto;
import org.apache.hadoop.tools.proto.GetUserMappingsProtocolProtos.GetGroupsForUserResponseProto;
import com.google.protobuf.RpcController;
import com.google.protobuf.ServiceException;
public class GetUserMappingsProtocolClientSideTranslatorPB implements
ProtocolMetaInterface, GetUserMappingsProtocol, Closeable
