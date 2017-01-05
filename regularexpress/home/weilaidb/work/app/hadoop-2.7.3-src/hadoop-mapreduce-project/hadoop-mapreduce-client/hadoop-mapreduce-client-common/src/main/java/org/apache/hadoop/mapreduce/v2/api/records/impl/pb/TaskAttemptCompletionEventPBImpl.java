package org.apache.hadoop.mapreduce.v2.api.records.impl.pb;
import org.apache.hadoop.mapreduce.v2.api.records.TaskAttemptCompletionEvent;
import org.apache.hadoop.mapreduce.v2.api.records.TaskAttemptCompletionEventStatus;
import org.apache.hadoop.mapreduce.v2.api.records.TaskAttemptId;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.TaskAttemptCompletionEventProto;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.TaskAttemptCompletionEventProtoOrBuilder;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.TaskAttemptCompletionEventStatusProto;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.TaskAttemptIdProto;
import org.apache.hadoop.mapreduce.v2.util.MRProtoUtils;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoBase;
public class TaskAttemptCompletionEventPBImpl extends ProtoBase<TaskAttemptCompletionEventProto> implements TaskAttemptCompletionEvent
