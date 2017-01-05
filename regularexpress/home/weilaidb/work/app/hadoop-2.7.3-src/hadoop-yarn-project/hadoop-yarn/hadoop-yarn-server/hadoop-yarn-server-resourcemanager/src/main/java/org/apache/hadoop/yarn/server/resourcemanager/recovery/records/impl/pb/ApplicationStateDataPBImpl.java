package org.apache.hadoop.yarn.server.resourcemanager.recovery.records.impl.pb;
import org.apache.hadoop.yarn.api.records.ApplicationSubmissionContext;
import org.apache.hadoop.yarn.api.records.impl.pb.ApplicationSubmissionContextPBImpl;
import org.apache.hadoop.yarn.proto.YarnServerResourceManagerRecoveryProtos.ApplicationStateDataProto;
import org.apache.hadoop.yarn.proto.YarnServerResourceManagerRecoveryProtos.ApplicationStateDataProtoOrBuilder;
import org.apache.hadoop.yarn.proto.YarnServerResourceManagerRecoveryProtos.RMAppStateProto;
import org.apache.hadoop.yarn.server.resourcemanager.recovery.records.ApplicationStateData;
import org.apache.hadoop.yarn.server.resourcemanager.rmapp.RMAppState;
import com.google.protobuf.TextFormat;
public class ApplicationStateDataPBImpl extends ApplicationStateData
