package org.apache.hadoop.security.protocolPB;
import java.io.Closeable;
import java.io.IOException;
import org.apache.hadoop.ipc.ProtobufHelper;
import org.apache.hadoop.ipc.ProtocolMetaInterface;
import org.apache.hadoop.ipc.RPC;
import org.apache.hadoop.ipc.RpcClientUtil;
import org.apache.hadoop.security.RefreshUserMappingsProtocol;
import org.apache.hadoop.security.proto.RefreshUserMappingsProtocolProtos.RefreshSuperUserGroupsConfigurationRequestProto;
import org.apache.hadoop.security.proto.RefreshUserMappingsProtocolProtos.RefreshUserToGroupsMappingsRequestProto;
import com.google.protobuf.RpcController;
import com.google.protobuf.ServiceException;
public class RefreshUserMappingsProtocolClientSideTranslatorPB implements
ProtocolMetaInterface, RefreshUserMappingsProtocol, Closeable
