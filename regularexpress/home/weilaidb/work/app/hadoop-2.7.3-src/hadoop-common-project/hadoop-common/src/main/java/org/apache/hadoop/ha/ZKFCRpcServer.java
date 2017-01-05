package org.apache.hadoop.ha;
import java.io.IOException;
import java.net.InetSocketAddress;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.CommonConfigurationKeys;
import org.apache.hadoop.ha.proto.ZKFCProtocolProtos.ZKFCProtocolService;
import org.apache.hadoop.ha.protocolPB.ZKFCProtocolPB;
import org.apache.hadoop.ha.protocolPB.ZKFCProtocolServerSideTranslatorPB;
import org.apache.hadoop.ipc.ProtobufRpcEngine;
import org.apache.hadoop.ipc.RPC;
import org.apache.hadoop.ipc.RPC.Server;
import org.apache.hadoop.security.AccessControlException;
import org.apache.hadoop.security.authorize.PolicyProvider;
import com.google.protobuf.BlockingService;
@InterfaceAudience.LimitedPrivate("HDFS")
@InterfaceStability.Evolving
public class ZKFCRpcServer implements ZKFCProtocol
