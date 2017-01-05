package org.apache.hadoop.yarn.server.api.impl.pb.client;
import java.io.Closeable;
import java.io.IOException;
import java.net.InetSocketAddress;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.ipc.ProtobufRpcEngine;
import org.apache.hadoop.ipc.RPC;
import org.apache.hadoop.yarn.server.api.SCMAdminProtocol;
import org.apache.hadoop.yarn.server.api.SCMAdminProtocolPB;
import org.apache.hadoop.yarn.server.api.protocolrecords.impl.pb.RunSharedCacheCleanerTaskRequestPBImpl;
import org.apache.hadoop.yarn.server.api.protocolrecords.impl.pb.RunSharedCacheCleanerTaskResponsePBImpl;
import org.apache.hadoop.yarn.server.api.protocolrecords.RunSharedCacheCleanerTaskRequest;
import org.apache.hadoop.yarn.server.api.protocolrecords.RunSharedCacheCleanerTaskResponse;
import org.apache.hadoop.yarn.exceptions.YarnException;
import org.apache.hadoop.yarn.ipc.RPCUtil;
import org.apache.hadoop.yarn.proto.YarnServiceProtos;
import com.google.protobuf.ServiceException;
public class SCMAdminProtocolPBClientImpl implements SCMAdminProtocol,
Closeable
