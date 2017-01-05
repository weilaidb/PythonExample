package org.apache.hadoop.yarn.api.impl.pb.service;
import java.io.IOException;
import org.apache.hadoop.yarn.api.ClientSCMProtocol;
import org.apache.hadoop.yarn.api.ClientSCMProtocolPB;
import org.apache.hadoop.yarn.api.protocolrecords.ReleaseSharedCacheResourceResponse;
import org.apache.hadoop.yarn.api.protocolrecords.UseSharedCacheResourceResponse;
import org.apache.hadoop.yarn.api.protocolrecords.impl.pb.ReleaseSharedCacheResourceRequestPBImpl;
import org.apache.hadoop.yarn.api.protocolrecords.impl.pb.ReleaseSharedCacheResourceResponsePBImpl;
import org.apache.hadoop.yarn.api.protocolrecords.impl.pb.UseSharedCacheResourceRequestPBImpl;
import org.apache.hadoop.yarn.api.protocolrecords.impl.pb.UseSharedCacheResourceResponsePBImpl;
import org.apache.hadoop.yarn.exceptions.YarnException;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.ReleaseSharedCacheResourceRequestProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.ReleaseSharedCacheResourceResponseProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.UseSharedCacheResourceRequestProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.UseSharedCacheResourceResponseProto;
import com.google.protobuf.RpcController;
import com.google.protobuf.ServiceException;
public class ClientSCMProtocolPBServiceImpl implements ClientSCMProtocolPB
