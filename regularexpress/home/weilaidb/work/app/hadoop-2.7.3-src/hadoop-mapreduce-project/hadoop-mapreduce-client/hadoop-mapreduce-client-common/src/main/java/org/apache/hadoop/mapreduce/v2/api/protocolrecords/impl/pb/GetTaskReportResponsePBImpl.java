package org.apache.hadoop.mapreduce.v2.api.protocolrecords.impl.pb;
import org.apache.hadoop.mapreduce.v2.api.protocolrecords.GetTaskReportResponse;
import org.apache.hadoop.mapreduce.v2.api.records.TaskReport;
import org.apache.hadoop.mapreduce.v2.api.records.impl.pb.TaskReportPBImpl;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.TaskReportProto;
import org.apache.hadoop.mapreduce.v2.proto.MRServiceProtos.GetTaskReportResponseProto;
import org.apache.hadoop.mapreduce.v2.proto.MRServiceProtos.GetTaskReportResponseProtoOrBuilder;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoBase;
public class GetTaskReportResponsePBImpl extends ProtoBase<GetTaskReportResponseProto> implements GetTaskReportResponse
