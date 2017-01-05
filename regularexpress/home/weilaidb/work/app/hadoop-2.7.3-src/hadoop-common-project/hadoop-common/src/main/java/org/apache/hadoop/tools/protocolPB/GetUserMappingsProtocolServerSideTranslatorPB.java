package org.apache.hadoop.tools.protocolPB;
import java.io.IOException;
import org.apache.hadoop.tools.GetUserMappingsProtocol;
import org.apache.hadoop.tools.proto.GetUserMappingsProtocolProtos.GetGroupsForUserRequestProto;
import org.apache.hadoop.tools.proto.GetUserMappingsProtocolProtos.GetGroupsForUserResponseProto;
import com.google.protobuf.RpcController;
import com.google.protobuf.ServiceException;
public class GetUserMappingsProtocolServerSideTranslatorPB implements
GetUserMappingsProtocolPB
