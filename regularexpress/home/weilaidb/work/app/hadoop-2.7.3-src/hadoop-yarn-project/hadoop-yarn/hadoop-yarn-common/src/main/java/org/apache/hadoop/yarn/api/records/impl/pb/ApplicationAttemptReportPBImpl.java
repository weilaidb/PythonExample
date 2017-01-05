package org.apache.hadoop.yarn.api.records.impl.pb;
import org.apache.hadoop.yarn.api.records.ApplicationAttemptId;
import org.apache.hadoop.yarn.api.records.ApplicationAttemptReport;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.api.records.YarnApplicationAttemptState;
import org.apache.hadoop.yarn.proto.YarnProtos.ApplicationAttemptIdProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ApplicationAttemptReportProto;
import org.apache.hadoop.yarn.proto.YarnProtos.ApplicationAttemptReportProtoOrBuilder;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerIdProto;
import org.apache.hadoop.yarn.proto.YarnProtos.YarnApplicationAttemptStateProto;
import com.google.protobuf.TextFormat;
public class ApplicationAttemptReportPBImpl extends ApplicationAttemptReport
