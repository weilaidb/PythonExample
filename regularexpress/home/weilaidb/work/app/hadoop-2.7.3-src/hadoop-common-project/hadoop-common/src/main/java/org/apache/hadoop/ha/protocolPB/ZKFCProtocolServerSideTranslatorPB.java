package org.apache.hadoop.ha.protocolPB;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.ha.ZKFCProtocol;
import org.apache.hadoop.ha.proto.ZKFCProtocolProtos.CedeActiveRequestProto;
import org.apache.hadoop.ha.proto.ZKFCProtocolProtos.CedeActiveResponseProto;
import org.apache.hadoop.ha.proto.ZKFCProtocolProtos.GracefulFailoverRequestProto;
import org.apache.hadoop.ha.proto.ZKFCProtocolProtos.GracefulFailoverResponseProto;
import org.apache.hadoop.ipc.ProtocolSignature;
import org.apache.hadoop.ipc.RPC;
import com.google.protobuf.RpcController;
import com.google.protobuf.ServiceException;
@InterfaceAudience.Private
@InterfaceStability.Stable
public class ZKFCProtocolServerSideTranslatorPB implements
ZKFCProtocolPB
