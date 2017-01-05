package org.apache.hadoop.ipc;
import java.io.IOException;
import java.lang.reflect.Method;
import java.lang.reflect.Proxy;
import java.net.InetSocketAddress;
import java.util.List;
import java.util.Map;
import java.util.TreeMap;
import java.util.concurrent.ConcurrentHashMap;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.ipc.protobuf.ProtocolInfoProtos.GetProtocolSignatureRequestProto;
import org.apache.hadoop.ipc.protobuf.ProtocolInfoProtos.GetProtocolSignatureResponseProto;
import org.apache.hadoop.ipc.protobuf.ProtocolInfoProtos.ProtocolSignatureProto;
import org.apache.hadoop.net.NetUtils;
import com.google.protobuf.RpcController;
import com.google.protobuf.ServiceException;
public class RpcClientUtil
