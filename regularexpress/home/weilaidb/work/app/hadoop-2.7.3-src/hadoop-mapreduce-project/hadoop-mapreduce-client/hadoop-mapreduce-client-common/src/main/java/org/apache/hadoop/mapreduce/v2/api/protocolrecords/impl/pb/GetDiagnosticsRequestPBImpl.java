package org.apache.hadoop.mapreduce.v2.api.protocolrecords.impl.pb;
import org.apache.hadoop.mapreduce.v2.api.protocolrecords.GetDiagnosticsRequest;
import org.apache.hadoop.mapreduce.v2.api.records.TaskAttemptId;
import org.apache.hadoop.mapreduce.v2.api.records.impl.pb.TaskAttemptIdPBImpl;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.TaskAttemptIdProto;
import org.apache.hadoop.mapreduce.v2.proto.MRServiceProtos.GetDiagnosticsRequestProto;
import org.apache.hadoop.mapreduce.v2.proto.MRServiceProtos.GetDiagnosticsRequestProtoOrBuilder;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoBase;
public class GetDiagnosticsRequestPBImpl extends ProtoBase<GetDiagnosticsRequestProto> implements GetDiagnosticsRequest
