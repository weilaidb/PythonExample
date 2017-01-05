package org.apache.hadoop.mapreduce.v2.hs.protocolPB;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.mapreduce.v2.api.HSAdminRefreshProtocol;
import org.apache.hadoop.mapreduce.v2.api.HSAdminRefreshProtocolPB;
import org.apache.hadoop.mapreduce.v2.hs.proto.HSAdminRefreshProtocolProtos.RefreshAdminAclsResponseProto;
import org.apache.hadoop.mapreduce.v2.hs.proto.HSAdminRefreshProtocolProtos.RefreshAdminAclsRequestProto;
import org.apache.hadoop.mapreduce.v2.hs.proto.HSAdminRefreshProtocolProtos.RefreshLoadedJobCacheRequestProto;
import org.apache.hadoop.mapreduce.v2.hs.proto.HSAdminRefreshProtocolProtos.RefreshLoadedJobCacheResponseProto;
import org.apache.hadoop.mapreduce.v2.hs.proto.HSAdminRefreshProtocolProtos.RefreshJobRetentionSettingsRequestProto;
import org.apache.hadoop.mapreduce.v2.hs.proto.HSAdminRefreshProtocolProtos.RefreshJobRetentionSettingsResponseProto;
import org.apache.hadoop.mapreduce.v2.hs.proto.HSAdminRefreshProtocolProtos.RefreshLogRetentionSettingsRequestProto;
import org.apache.hadoop.mapreduce.v2.hs.proto.HSAdminRefreshProtocolProtos.RefreshLogRetentionSettingsResponseProto;
import com.google.protobuf.RpcController;
import com.google.protobuf.ServiceException;
@Private
public class HSAdminRefreshProtocolServerSideTranslatorPB implements
HSAdminRefreshProtocolPB
