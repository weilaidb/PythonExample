package org.apache.hadoop.yarn.server.applicationhistoryservice.records.impl.pb;
import org.apache.hadoop.yarn.api.records.ApplicationId;
import org.apache.hadoop.yarn.api.records.impl.pb.ApplicationIdPBImpl;
import org.apache.hadoop.yarn.proto.ApplicationHistoryServerProtos.ApplicationStartDataProto;
import org.apache.hadoop.yarn.proto.ApplicationHistoryServerProtos.ApplicationStartDataProtoOrBuilder;
import org.apache.hadoop.yarn.proto.YarnProtos.ApplicationIdProto;
import org.apache.hadoop.yarn.server.applicationhistoryservice.records.ApplicationStartData;
import com.google.protobuf.TextFormat;
public class ApplicationStartDataPBImpl extends ApplicationStartData
