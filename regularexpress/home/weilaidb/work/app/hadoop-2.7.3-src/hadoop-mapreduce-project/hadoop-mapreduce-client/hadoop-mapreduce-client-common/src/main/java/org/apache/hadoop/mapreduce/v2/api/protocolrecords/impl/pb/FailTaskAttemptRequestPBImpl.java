package org.apache.hadoop.mapreduce.v2.api.protocolrecords.impl.pb;
import org.apache.hadoop.mapreduce.v2.api.protocolrecords.FailTaskAttemptRequest;
import org.apache.hadoop.mapreduce.v2.api.records.TaskAttemptId;
import org.apache.hadoop.mapreduce.v2.api.records.impl.pb.TaskAttemptIdPBImpl;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.TaskAttemptIdProto;
import org.apache.hadoop.mapreduce.v2.proto.MRServiceProtos.FailTaskAttemptRequestProto;
import org.apache.hadoop.mapreduce.v2.proto.MRServiceProtos.FailTaskAttemptRequestProtoOrBuilder;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoBase;
public class FailTaskAttemptRequestPBImpl extends ProtoBase<FailTaskAttemptRequestProto> implements FailTaskAttemptRequest
