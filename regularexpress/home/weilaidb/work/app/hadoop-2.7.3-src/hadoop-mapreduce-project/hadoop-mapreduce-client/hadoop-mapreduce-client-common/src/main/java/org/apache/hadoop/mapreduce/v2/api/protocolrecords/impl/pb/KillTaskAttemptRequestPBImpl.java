package org.apache.hadoop.mapreduce.v2.api.protocolrecords.impl.pb;
import org.apache.hadoop.mapreduce.v2.api.protocolrecords.KillTaskAttemptRequest;
import org.apache.hadoop.mapreduce.v2.api.records.TaskAttemptId;
import org.apache.hadoop.mapreduce.v2.api.records.impl.pb.TaskAttemptIdPBImpl;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.TaskAttemptIdProto;
import org.apache.hadoop.mapreduce.v2.proto.MRServiceProtos.KillTaskAttemptRequestProto;
import org.apache.hadoop.mapreduce.v2.proto.MRServiceProtos.KillTaskAttemptRequestProtoOrBuilder;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoBase;
public class KillTaskAttemptRequestPBImpl extends ProtoBase<KillTaskAttemptRequestProto> implements KillTaskAttemptRequest
