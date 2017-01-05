package org.apache.hadoop.yarn.server.applicationhistoryservice.records.impl.pb;
import org.apache.hadoop.yarn.api.records.ApplicationId;
import org.apache.hadoop.yarn.api.records.FinalApplicationStatus;
import org.apache.hadoop.yarn.api.records.YarnApplicationState;
import org.apache.hadoop.yarn.api.records.impl.pb.ApplicationIdPBImpl;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoUtils;
import org.apache.hadoop.yarn.proto.ApplicationHistoryServerProtos.ApplicationFinishDataProto;
import org.apache.hadoop.yarn.proto.ApplicationHistoryServerProtos.ApplicationFinishDataProtoOrBuilder;
import org.apache.hadoop.yarn.proto.YarnProtos.ApplicationIdProto;
import org.apache.hadoop.yarn.proto.YarnProtos.FinalApplicationStatusProto;
import org.apache.hadoop.yarn.proto.YarnProtos.YarnApplicationStateProto;
import org.apache.hadoop.yarn.server.applicationhistoryservice.records.ApplicationFinishData;
import com.google.protobuf.TextFormat;
public class ApplicationFinishDataPBImpl extends ApplicationFinishData
