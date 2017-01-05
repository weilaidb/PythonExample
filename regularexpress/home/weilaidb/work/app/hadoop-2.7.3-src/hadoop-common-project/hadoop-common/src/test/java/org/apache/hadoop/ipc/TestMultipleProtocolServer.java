package org.apache.hadoop.ipc;
import java.io.IOException;
import java.net.InetSocketAddress;
import org.junit.Assert;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.ipc.TestProtoBufRpc.PBServerImpl;
import org.apache.hadoop.ipc.TestProtoBufRpc.TestRpcService;
import org.apache.hadoop.ipc.protobuf.TestRpcServiceProtos.TestProtobufRpcProto;
import org.apache.hadoop.net.NetUtils;
import org.junit.Before;
import org.junit.After;
import org.junit.Test;
import com.google.protobuf.BlockingService;
public class TestMultipleProtocolServer
