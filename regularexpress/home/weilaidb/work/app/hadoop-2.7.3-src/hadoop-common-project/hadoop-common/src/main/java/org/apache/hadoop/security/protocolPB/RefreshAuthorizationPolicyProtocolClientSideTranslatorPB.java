package org.apache.hadoop.security.protocolPB;
import java.io.Closeable;
import java.io.IOException;
import org.apache.hadoop.ipc.ProtobufHelper;
import org.apache.hadoop.ipc.ProtocolMetaInterface;
import org.apache.hadoop.ipc.RPC;
import org.apache.hadoop.ipc.RpcClientUtil;
import org.apache.hadoop.security.authorize.RefreshAuthorizationPolicyProtocol;
import org.apache.hadoop.security.proto.RefreshAuthorizationPolicyProtocolProtos.RefreshServiceAclRequestProto;
import org.apache.hadoop.security.protocolPB.RefreshAuthorizationPolicyProtocolPB;
import com.google.protobuf.RpcController;
import com.google.protobuf.ServiceException;
public class RefreshAuthorizationPolicyProtocolClientSideTranslatorPB implements
ProtocolMetaInterface, RefreshAuthorizationPolicyProtocol, Closeable
