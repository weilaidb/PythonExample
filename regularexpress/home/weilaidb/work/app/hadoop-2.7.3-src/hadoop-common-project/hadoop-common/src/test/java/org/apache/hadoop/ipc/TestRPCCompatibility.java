package org.apache.hadoop.ipc;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertFalse;
import static org.junit.Assert.fail;
import java.io.IOException;
import java.lang.reflect.Method;
import java.net.InetSocketAddress;
import org.junit.Assert;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.ipc.protobuf.ProtocolInfoProtos.GetProtocolSignatureRequestProto;
import org.apache.hadoop.ipc.protobuf.ProtocolInfoProtos.GetProtocolSignatureResponseProto;
import org.apache.hadoop.ipc.protobuf.ProtocolInfoProtos.ProtocolSignatureProto;
import org.apache.hadoop.ipc.protobuf.RpcHeaderProtos.RpcResponseHeaderProto.RpcErrorCodeProto;
import org.apache.hadoop.net.NetUtils;
import org.junit.After;
import org.junit.Before;
import org.junit.Test;
public class TestRPCCompatibility
