package org.apache.hadoop.yarn.api.impl.pb.service;
import java.io.IOException;
import org.apache.hadoop.classification.InterfaceAudience.Private;
import org.apache.hadoop.yarn.api.ApplicationMasterProtocol;
import org.apache.hadoop.yarn.api.ApplicationMasterProtocolPB;
import org.apache.hadoop.yarn.api.protocolrecords.AllocateResponse;
import org.apache.hadoop.yarn.api.protocolrecords.FinishApplicationMasterResponse;
import org.apache.hadoop.yarn.api.protocolrecords.RegisterApplicationMasterResponse;
import org.apache.hadoop.yarn.api.protocolrecords.impl.pb.AllocateRequestPBImpl;
import org.apache.hadoop.yarn.api.protocolrecords.impl.pb.AllocateResponsePBImpl;
import org.apache.hadoop.yarn.api.protocolrecords.impl.pb.FinishApplicationMasterRequestPBImpl;
import org.apache.hadoop.yarn.api.protocolrecords.impl.pb.FinishApplicationMasterResponsePBImpl;
import org.apache.hadoop.yarn.api.protocolrecords.impl.pb.RegisterApplicationMasterRequestPBImpl;
import org.apache.hadoop.yarn.api.protocolrecords.impl.pb.RegisterApplicationMasterResponsePBImpl;
import org.apache.hadoop.yarn.exceptions.YarnException;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.AllocateRequestProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.AllocateResponseProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.FinishApplicationMasterRequestProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.FinishApplicationMasterResponseProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.RegisterApplicationMasterRequestProto;
import org.apache.hadoop.yarn.proto.YarnServiceProtos.RegisterApplicationMasterResponseProto;
import com.google.protobuf.RpcController;
import com.google.protobuf.ServiceException;
@Private
public class ApplicationMasterProtocolPBServiceImpl implements ApplicationMasterProtocolPB
