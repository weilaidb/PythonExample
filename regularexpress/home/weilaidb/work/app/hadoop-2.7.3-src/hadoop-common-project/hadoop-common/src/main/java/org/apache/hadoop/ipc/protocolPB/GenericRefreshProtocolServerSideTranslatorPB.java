package org.apache.hadoop.ipc.protocolPB;
import java.io.IOException;
import java.util.Collection;
import java.util.List;
import org.apache.hadoop.ipc.GenericRefreshProtocol;
import org.apache.hadoop.ipc.RefreshResponse;
import org.apache.hadoop.ipc.proto.GenericRefreshProtocolProtos.GenericRefreshRequestProto;
import org.apache.hadoop.ipc.proto.GenericRefreshProtocolProtos.GenericRefreshResponseProto;
import org.apache.hadoop.ipc.proto.GenericRefreshProtocolProtos.GenericRefreshResponseCollectionProto;
import com.google.protobuf.RpcController;
import com.google.protobuf.ServiceException;
public class GenericRefreshProtocolServerSideTranslatorPB implements
GenericRefreshProtocolPB
