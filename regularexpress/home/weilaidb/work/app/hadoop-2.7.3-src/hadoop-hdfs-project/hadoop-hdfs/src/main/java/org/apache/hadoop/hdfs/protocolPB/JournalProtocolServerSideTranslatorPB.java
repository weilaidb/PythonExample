package org.apache.hadoop.hdfs.protocolPB;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.hdfs.protocol.proto.JournalProtocolProtos.FenceRequestProto;
import org.apache.hadoop.hdfs.protocol.proto.JournalProtocolProtos.FenceResponseProto;
import org.apache.hadoop.hdfs.protocol.proto.JournalProtocolProtos.JournalRequestProto;
import org.apache.hadoop.hdfs.protocol.proto.JournalProtocolProtos.JournalResponseProto;
import org.apache.hadoop.hdfs.protocol.proto.JournalProtocolProtos.StartLogSegmentRequestProto;
import org.apache.hadoop.hdfs.protocol.proto.JournalProtocolProtos.StartLogSegmentResponseProto;
import org.apache.hadoop.hdfs.server.protocol.FenceResponse;
import org.apache.hadoop.hdfs.server.protocol.JournalProtocol;
import com.google.protobuf.RpcController;
import com.google.protobuf.ServiceException;
@InterfaceAudience.Private
public class JournalProtocolServerSideTranslatorPB implements JournalProtocolPB
