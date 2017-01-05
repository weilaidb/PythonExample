package org.apache.hadoop.yarn.server.applicationhistoryservice.records.impl.pb;
import org.apache.hadoop.yarn.api.records.ApplicationAttemptId;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.api.records.impl.pb.ApplicationAttemptIdPBImpl;
import org.apache.hadoop.yarn.api.records.impl.pb.ContainerIdPBImpl;
import org.apache.hadoop.yarn.proto.ApplicationHistoryServerProtos.ApplicationAttemptStartDataProto;
import org.apache.hadoop.yarn.proto.ApplicationHistoryServerProtos.ApplicationAttemptStartDataProtoOrBuilder;
import org.apache.hadoop.yarn.proto.YarnProtos.ApplicationAttemptIdProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerIdProto;
import org.apache.hadoop.yarn.server.applicationhistoryservice.records.ApplicationAttemptStartData;
import com.google.protobuf.TextFormat;
public class ApplicationAttemptStartDataPBImpl extends
ApplicationAttemptStartData
