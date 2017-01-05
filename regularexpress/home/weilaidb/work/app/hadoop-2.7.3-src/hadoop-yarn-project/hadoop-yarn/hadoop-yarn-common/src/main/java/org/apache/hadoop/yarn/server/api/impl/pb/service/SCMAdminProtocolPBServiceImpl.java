package org.apache.hadoop.yarn.server.api.impl.pb.service;
import java.io.IOException;
import org.apache.hadoop.yarn.server.api.SCMAdminProtocol;
import org.apache.hadoop.yarn.server.api.SCMAdminProtocolPB;
import org.apache.hadoop.yarn.server.api.protocolrecords.RunSharedCacheCleanerTaskResponse;
import org.apache.hadoop.yarn.server.api.protocolrecords.impl.pb.RunSharedCacheCleanerTaskRequestPBImpl;
import org.apache.hadoop.yarn.server.api.protocolrecords.impl.pb.RunSharedCacheCleanerTaskResponsePBImpl;
import org.apache.hadoop.yarn.exceptions.YarnException;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.RunSharedCacheCleanerTaskRequestProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.RunSharedCacheCleanerTaskResponseProto;
import com.google.protobuf.RpcController;
import com.google.protobuf.ServiceException;
public class SCMAdminProtocolPBServiceImpl implements SCMAdminProtocolPB
