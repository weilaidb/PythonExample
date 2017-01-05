package org.apache.hadoop.ipc;
import java.io.IOException;
import java.lang.reflect.Constructor;
import org.apache.hadoop.ipc.protobuf.RpcHeaderProtos.RpcResponseHeaderProto.RpcErrorCodeProto;
import org.xml.sax.Attributes;
public class RemoteException extends IOException
