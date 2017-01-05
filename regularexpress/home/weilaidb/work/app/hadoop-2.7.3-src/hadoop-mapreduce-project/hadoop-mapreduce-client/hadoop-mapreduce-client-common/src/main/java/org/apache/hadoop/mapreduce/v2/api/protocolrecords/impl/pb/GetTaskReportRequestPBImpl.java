package org.apache.hadoop.mapreduce.v2.api.protocolrecords.impl.pb;
import org.apache.hadoop.mapreduce.v2.api.protocolrecords.GetTaskReportRequest;
import org.apache.hadoop.mapreduce.v2.api.records.TaskId;
import org.apache.hadoop.mapreduce.v2.api.records.impl.pb.TaskIdPBImpl;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.TaskIdProto;
import org.apache.hadoop.mapreduce.v2.proto.MRServiceProtos.GetTaskReportRequestProto;
import org.apache.hadoop.mapreduce.v2.proto.MRServiceProtos.GetTaskReportRequestProtoOrBuilder;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoBase;
public class GetTaskReportRequestPBImpl extends ProtoBase<GetTaskReportRequestProto> implements GetTaskReportRequest
