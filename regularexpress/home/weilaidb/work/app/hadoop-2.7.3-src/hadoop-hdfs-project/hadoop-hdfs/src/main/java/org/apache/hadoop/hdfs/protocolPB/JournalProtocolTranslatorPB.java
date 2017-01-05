package org.apache.hadoop.hdfs.protocolPB;
import java.io.Closeable;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.classification.InterfaceStability;
import org.apache.hadoop.hdfs.protocol.proto.JournalProtocolProtos.FenceRequestProto;
import org.apache.hadoop.hdfs.protocol.proto.JournalProtocolProtos.FenceResponseProto;
import org.apache.hadoop.hdfs.protocol.proto.JournalProtocolProtos.JournalRequestProto;
import org.apache.hadoop.hdfs.protocol.proto.JournalProtocolProtos.StartLogSegmentRequestProto;
import org.apache.hadoop.hdfs.server.protocol.FenceResponse;
import org.apache.hadoop.hdfs.server.protocol.JournalInfo;
import org.apache.hadoop.hdfs.server.protocol.JournalProtocol;
import org.apache.hadoop.ipc.ProtobufHelper;
import org.apache.hadoop.ipc.ProtocolMetaInterface;
import org.apache.hadoop.ipc.RPC;
import org.apache.hadoop.ipc.RpcClientUtil;
import com.google.protobuf.RpcController;
import com.google.protobuf.ServiceException;
@InterfaceAudience.Private
@InterfaceStability.Stable
public class JournalProtocolTranslatorPB implements ProtocolMetaInterface,
JournalProtocol, Closeable
