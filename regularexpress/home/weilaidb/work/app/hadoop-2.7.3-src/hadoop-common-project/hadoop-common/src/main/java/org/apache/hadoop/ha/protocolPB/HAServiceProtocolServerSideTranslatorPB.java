package org.apache.hadoop.ha.protocolPB;
import java.io.IOException;
import org.apache.commons.logging.Log;
import org.apache.commons.logging.LogFactory;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.ha.HAServiceProtocol;
import org.apache.hadoop.ha.HAServiceProtocol.StateChangeRequestInfo;
import org.apache.hadoop.ha.HAServiceProtocol.RequestSource;
import org.apache.hadoop.ha.HAServiceStatus;
import org.apache.hadoop.ha.proto.HAServiceProtocolProtos.GetServiceStatusRequestProto;
import org.apache.hadoop.ha.proto.HAServiceProtocolProtos.GetServiceStatusResponseProto;
import org.apache.hadoop.ha.proto.HAServiceProtocolProtos.HAStateChangeRequestInfoProto;
import org.apache.hadoop.ha.proto.HAServiceProtocolProtos.HAServiceStateProto;
import org.apache.hadoop.ha.proto.HAServiceProtocolProtos.MonitorHealthRequestProto;
import org.apache.hadoop.ha.proto.HAServiceProtocolProtos.MonitorHealthResponseProto;
import org.apache.hadoop.ha.proto.HAServiceProtocolProtos.TransitionToActiveRequestProto;
import org.apache.hadoop.ha.proto.HAServiceProtocolProtos.TransitionToActiveResponseProto;
import org.apache.hadoop.ha.proto.HAServiceProtocolProtos.TransitionToStandbyRequestProto;
import org.apache.hadoop.ha.proto.HAServiceProtocolProtos.TransitionToStandbyResponseProto;
import org.apache.hadoop.ipc.ProtocolSignature;
import org.apache.hadoop.ipc.RPC;
import com.google.protobuf.RpcController;
import com.google.protobuf.ServiceException;
@InterfaceAudience.Private
@InterfaceStability.Stable
public class HAServiceProtocolServerSideTranslatorPB implements
HAServiceProtocolPB
