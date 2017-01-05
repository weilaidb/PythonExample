package org.apache.hadoop.mapreduce.v2.api.protocolrecords.impl.pb;
import org.apache.hadoop.mapreduce.v2.api.protocolrecords.GetTaskAttemptReportResponse;
import org.apache.hadoop.mapreduce.v2.api.records.TaskAttemptReport;
import org.apache.hadoop.mapreduce.v2.api.records.impl.pb.TaskAttemptReportPBImpl;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.TaskAttemptReportProto;
import org.apache.hadoop.mapreduce.v2.proto.MRServiceProtos.GetTaskAttemptReportResponseProto;
import org.apache.hadoop.mapreduce.v2.proto.MRServiceProtos.GetTaskAttemptReportResponseProtoOrBuilder;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoBase;
public class GetTaskAttemptReportResponsePBImpl extends ProtoBase<GetTaskAttemptReportResponseProto> implements GetTaskAttemptReportResponse
