package org.apache.hadoop.security.protocolPB;
import java.io.IOException;
import org.apache.hadoop.security.RefreshUserMappingsProtocol;
import org.apache.hadoop.security.proto.RefreshUserMappingsProtocolProtos.RefreshSuperUserGroupsConfigurationRequestProto;
import org.apache.hadoop.security.proto.RefreshUserMappingsProtocolProtos.RefreshSuperUserGroupsConfigurationResponseProto;
import org.apache.hadoop.security.proto.RefreshUserMappingsProtocolProtos.RefreshUserToGroupsMappingsRequestProto;
import org.apache.hadoop.security.proto.RefreshUserMappingsProtocolProtos.RefreshUserToGroupsMappingsResponseProto;
import com.google.protobuf.RpcController;
import com.google.protobuf.ServiceException;
public class RefreshUserMappingsProtocolServerSideTranslatorPB implements RefreshUserMappingsProtocolPB
