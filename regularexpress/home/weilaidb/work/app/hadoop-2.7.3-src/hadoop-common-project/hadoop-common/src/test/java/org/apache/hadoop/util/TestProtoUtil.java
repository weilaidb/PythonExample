package org.apache.hadoop.util;
import static org.junit.Assert.assertEquals;
import static org.junit.Assert.assertTrue;
import java.io.ByteArrayInputStream;
import java.io.ByteArrayOutputStream;
import java.io.DataInputStream;
import java.io.IOException;
import java.util.Arrays;
import org.apache.hadoop.ipc.ClientId;
import org.apache.hadoop.ipc.RPC.RpcKind;
import org.apache.hadoop.ipc.RpcConstants;
import org.apache.hadoop.ipc.protobuf.RpcHeaderProtos.RpcRequestHeaderProto;
import org.apache.hadoop.ipc.protobuf.RpcHeaderProtos.RpcRequestHeaderProto.OperationProto;
import org.junit.Test;
import com.google.protobuf.CodedOutputStream;
public class TestProtoUtil
