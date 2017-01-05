package org.apache.hadoop.mapreduce.v2.api.impl.pb.client;
import java.io.IOException;
import java.net.InetSocketAddress;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.ipc.ProtobufRpcEngine;
import org.apache.hadoop.ipc.RPC;
import org.apache.hadoop.mapreduce.v2.api.HSClientProtocol;
import org.apache.hadoop.mapreduce.v2.api.HSClientProtocolPB;
public class HSClientProtocolPBClientImpl extends MRClientProtocolPBClientImpl
implements HSClientProtocol
