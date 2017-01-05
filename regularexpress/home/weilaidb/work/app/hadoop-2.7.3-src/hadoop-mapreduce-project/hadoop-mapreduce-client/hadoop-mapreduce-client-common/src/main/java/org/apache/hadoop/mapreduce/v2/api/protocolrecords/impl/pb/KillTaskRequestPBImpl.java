package org.apache.hadoop.mapreduce.v2.api.protocolrecords.impl.pb;
import org.apache.hadoop.mapreduce.v2.api.protocolrecords.KillTaskRequest;
import org.apache.hadoop.mapreduce.v2.api.records.TaskId;
import org.apache.hadoop.mapreduce.v2.api.records.impl.pb.TaskIdPBImpl;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.TaskIdProto;
import org.apache.hadoop.mapreduce.v2.proto.MRServiceProtos.KillTaskRequestProto;
import org.apache.hadoop.mapreduce.v2.proto.MRServiceProtos.KillTaskRequestProtoOrBuilder;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoBase;
public class KillTaskRequestPBImpl extends ProtoBase<KillTaskRequestProto> implements KillTaskRequest
