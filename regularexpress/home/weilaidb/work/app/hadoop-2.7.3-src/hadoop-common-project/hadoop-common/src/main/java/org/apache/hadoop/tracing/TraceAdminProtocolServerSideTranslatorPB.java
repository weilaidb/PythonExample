package org.apache.hadoop.tracing;
import java.io.Closeable;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.io.retry.AtMostOnce;
import org.apache.hadoop.ipc.ProtobufHelper;
import org.apache.hadoop.ipc.ProtocolSignature;
import org.apache.hadoop.ipc.RPC;
import org.apache.hadoop.tracing.TraceAdminPB.AddSpanReceiverRequestProto;
import org.apache.hadoop.tracing.TraceAdminPB.AddSpanReceiverResponseProto;
import org.apache.hadoop.tracing.TraceAdminPB.ListSpanReceiversRequestProto;
import org.apache.hadoop.tracing.TraceAdminPB.ListSpanReceiversResponseProto;
import org.apache.hadoop.tracing.TraceAdminPB.ConfigPair;
import org.apache.hadoop.tracing.TraceAdminPB.RemoveSpanReceiverRequestProto;
import org.apache.hadoop.tracing.TraceAdminPB.RemoveSpanReceiverResponseProto;
import com.google.protobuf.RpcController;
import com.google.protobuf.ServiceException;
@InterfaceAudience.Private
public class TraceAdminProtocolServerSideTranslatorPB
implements TraceAdminProtocolPB, Closeable
