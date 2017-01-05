package org.apache.hadoop.mapreduce.v2.api.protocolrecords.impl.pb;
import org.apache.hadoop.mapreduce.v2.api.protocolrecords.GetTaskReportsRequest;
import org.apache.hadoop.mapreduce.v2.api.records.JobId;
import org.apache.hadoop.mapreduce.v2.api.records.TaskType;
import org.apache.hadoop.mapreduce.v2.api.records.impl.pb.JobIdPBImpl;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.JobIdProto;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.TaskTypeProto;
import org.apache.hadoop.mapreduce.v2.proto.MRServiceProtos.GetTaskReportsRequestProto;
import org.apache.hadoop.mapreduce.v2.proto.MRServiceProtos.GetTaskReportsRequestProtoOrBuilder;
import org.apache.hadoop.mapreduce.v2.util.MRProtoUtils;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoBase;
public class GetTaskReportsRequestPBImpl extends ProtoBase<GetTaskReportsRequestProto> implements GetTaskReportsRequest
