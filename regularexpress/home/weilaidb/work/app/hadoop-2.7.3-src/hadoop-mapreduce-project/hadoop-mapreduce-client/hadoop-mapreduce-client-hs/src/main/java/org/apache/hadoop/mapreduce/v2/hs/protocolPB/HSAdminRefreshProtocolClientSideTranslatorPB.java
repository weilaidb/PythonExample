package org.apache.hadoop.mapreduce.v2.hs.protocolPB;
import java.io.Closeable;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.ipc.ProtobufHelper;
import org.apache.hadoop.ipc.ProtocolMetaInterface;
import org.apache.hadoop.ipc.RPC;
import org.apache.hadoop.ipc.RpcClientUtil;
import org.apache.hadoop.mapreduce.v2.api.HSAdminRefreshProtocol;
import org.apache.hadoop.mapreduce.v2.api.HSAdminRefreshProtocolPB;
import org.apache.hadoop.mapreduce.v2.hs.proto.HSAdminRefreshProtocolProtos.RefreshAdminAclsRequestProto;
import org.apache.hadoop.mapreduce.v2.hs.proto.HSAdminRefreshProtocolProtos.RefreshLoadedJobCacheRequestProto;
import org.apache.hadoop.mapreduce.v2.hs.proto.HSAdminRefreshProtocolProtos.RefreshJobRetentionSettingsRequestProto;
import org.apache.hadoop.mapreduce.v2.hs.proto.HSAdminRefreshProtocolProtos.RefreshLogRetentionSettingsRequestProto;
import com.google.protobuf.RpcController;
import com.google.protobuf.ServiceException;
@Private
public class HSAdminRefreshProtocolClientSideTranslatorPB implements
ProtocolMetaInterface, HSAdminRefreshProtocol, Closeable
