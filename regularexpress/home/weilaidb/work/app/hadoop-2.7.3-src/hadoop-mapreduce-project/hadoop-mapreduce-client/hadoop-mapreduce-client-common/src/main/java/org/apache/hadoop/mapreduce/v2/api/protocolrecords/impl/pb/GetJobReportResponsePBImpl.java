package org.apache.hadoop.mapreduce.v2.api.protocolrecords.impl.pb;
import org.apache.hadoop.mapreduce.v2.api.protocolrecords.GetJobReportResponse;
import org.apache.hadoop.mapreduce.v2.api.records.JobReport;
import org.apache.hadoop.mapreduce.v2.api.records.impl.pb.JobReportPBImpl;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.JobReportProto;
import org.apache.hadoop.mapreduce.v2.proto.MRServiceProtos.GetJobReportResponseProto;
import org.apache.hadoop.mapreduce.v2.proto.MRServiceProtos.GetJobReportResponseProtoOrBuilder;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoBase;
public class GetJobReportResponsePBImpl extends ProtoBase<GetJobReportResponseProto> implements GetJobReportResponse
