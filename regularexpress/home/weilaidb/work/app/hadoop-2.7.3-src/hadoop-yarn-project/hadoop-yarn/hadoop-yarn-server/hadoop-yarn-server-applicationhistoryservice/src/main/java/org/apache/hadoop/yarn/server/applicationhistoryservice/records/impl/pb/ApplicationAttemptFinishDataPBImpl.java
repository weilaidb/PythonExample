package org.apache.hadoop.yarn.server.applicationhistoryservice.records.impl.pb;
import org.apache.hadoop.yarn.api.records.ApplicationAttemptId;
import org.apache.hadoop.yarn.api.records.FinalApplicationStatus;
import org.apache.hadoop.yarn.api.records.YarnApplicationAttemptState;
import org.apache.hadoop.yarn.api.records.impl.pb.ApplicationAttemptIdPBImpl;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoUtils;
import org.apache.hadoop.yarn.proto.ApplicationHistoryServerProtos.ApplicationAttemptFinishDataProto;
import org.apache.hadoop.yarn.proto.ApplicationHistoryServerProtos.ApplicationAttemptFinishDataProtoOrBuilder;
import org.apache.hadoop.yarn.proto.YarnProtos.ApplicationAttemptIdProto;
import org.apache.hadoop.yarn.proto.YarnProtos.FinalApplicationStatusProto;
import org.apache.hadoop.yarn.proto.YarnProtos.YarnApplicationAttemptStateProto;
import org.apache.hadoop.yarn.server.applicationhistoryservice.records.ApplicationAttemptFinishData;
import com.google.protobuf.TextFormat;
public class ApplicationAttemptFinishDataPBImpl extends
ApplicationAttemptFinishData
