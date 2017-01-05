package org.apache.hadoop.yarn.api.impl.pb.client;
import java.io.Closeable;
import java.io.IOException;
import java.net.InetSocketAddress;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.ipc.ProtobufRpcEngine;
import org.apache.hadoop.ipc.RPC;
import org.apache.hadoop.yarn.api.ClientSCMProtocol;
import org.apache.hadoop.yarn.api.ClientSCMProtocolPB;
import org.apache.hadoop.yarn.api.protocolrecords.ReleaseSharedCacheResourceRequest;
import org.apache.hadoop.yarn.api.protocolrecords.ReleaseSharedCacheResourceResponse;
import org.apache.hadoop.yarn.api.protocolrecords.UseSharedCacheResourceRequest;
import org.apache.hadoop.yarn.api.protocolrecords.UseSharedCacheResourceResponse;
import org.apache.hadoop.yarn.api.protocolrecords.impl.pb.ReleaseSharedCacheResourceRequestPBImpl;
import org.apache.hadoop.yarn.api.protocolrecords.impl.pb.ReleaseSharedCacheResourceResponsePBImpl;
import org.apache.hadoop.yarn.api.protocolrecords.impl.pb.UseSharedCacheResourceRequestPBImpl;
import org.apache.hadoop.yarn.api.protocolrecords.impl.pb.UseSharedCacheResourceResponsePBImpl;
import org.apache.hadoop.yarn.exceptions.YarnException;
import org.apache.hadoop.yarn.ipc.RPCUtil;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.ReleaseSharedCacheResourceRequestProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.UseSharedCacheResourceRequestProto;
import com.google.protobuf.ServiceException;
public class ClientSCMProtocolPBClientImpl implements ClientSCMProtocol,
Closeable
