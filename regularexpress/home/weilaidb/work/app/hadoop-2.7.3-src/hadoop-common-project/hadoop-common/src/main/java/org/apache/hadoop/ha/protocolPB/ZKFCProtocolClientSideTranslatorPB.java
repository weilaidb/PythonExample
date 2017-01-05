package org.apache.hadoop.ha.protocolPB;
import java.io.Closeable;
import java.io.IOException;
import java.net.InetSocketAddress;
import javax.net.SocketFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.ha.ZKFCProtocol;
import org.apache.hadoop.ha.proto.ZKFCProtocolProtos.CedeActiveRequestProto;
import org.apache.hadoop.ha.proto.ZKFCProtocolProtos.GracefulFailoverRequestProto;
import org.apache.hadoop.ipc.ProtobufHelper;
import org.apache.hadoop.ipc.ProtobufRpcEngine;
import org.apache.hadoop.ipc.ProtocolTranslator;
import org.apache.hadoop.ipc.RPC;
import org.apache.hadoop.security.AccessControlException;
import org.apache.hadoop.security.UserGroupInformation;
import com.google.protobuf.RpcController;
import com.google.protobuf.ServiceException;
public class ZKFCProtocolClientSideTranslatorPB implements
ZKFCProtocol, Closeable, ProtocolTranslator
