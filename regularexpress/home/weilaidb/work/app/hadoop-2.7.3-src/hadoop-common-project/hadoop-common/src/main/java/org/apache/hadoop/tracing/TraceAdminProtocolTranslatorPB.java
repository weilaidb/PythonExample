package org.apache.hadoop.tracing;
import java.io.Closeable;
import java.io.IOException;
import java.util.ArrayList;
import org.apache.hadoop.classification.InterfaceAudience;
import org.apache.hadoop.ipc.ProtobufHelper;
import org.apache.hadoop.ipc.ProtocolTranslator;
import org.apache.hadoop.ipc.RPC;
import org.apache.hadoop.tracing.TraceAdminPB.AddSpanReceiverRequestProto;
import org.apache.hadoop.tracing.TraceAdminPB.AddSpanReceiverResponseProto;
import org.apache.hadoop.tracing.TraceAdminPB.ListSpanReceiversRequestProto;
import org.apache.hadoop.tracing.TraceAdminPB.ListSpanReceiversResponseProto;
import org.apache.hadoop.tracing.TraceAdminPB.ConfigPair;
import org.apache.hadoop.tracing.TraceAdminPB.RemoveSpanReceiverRequestProto;
import org.apache.hadoop.tracing.TraceAdminPB.SpanReceiverListInfo;
import org.apache.hadoop.tracing.SpanReceiverInfo.ConfigurationPair;
import com.google.protobuf.ServiceException;
@InterfaceAudience.Private
public class TraceAdminProtocolTranslatorPB implements
TraceAdminProtocol, ProtocolTranslator, Closeable
