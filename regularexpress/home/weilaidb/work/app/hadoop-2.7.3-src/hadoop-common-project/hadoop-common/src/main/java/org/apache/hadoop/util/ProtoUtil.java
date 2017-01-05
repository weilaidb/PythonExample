package org.apache.hadoop.util;
import java.io.DataInput;
import java.io.IOException;
import org.apache.hadoop.ipc.RPC;
import org.apache.hadoop.ipc.protobuf.IpcConnectionContextProtos.IpcConnectionContextProto;
import org.apache.hadoop.ipc.protobuf.IpcConnectionContextProtos.UserInformationProto;
import org.apache.hadoop.ipc.protobuf.RpcHeaderProtos.*;
import org.apache.hadoop.security.SaslRpcServer.AuthMethod;
import org.apache.hadoop.security.UserGroupInformation;
import org.apache.htrace.Span;
import org.apache.htrace.Trace;
import com.google.protobuf.ByteString;
public abstract class ProtoUtil
