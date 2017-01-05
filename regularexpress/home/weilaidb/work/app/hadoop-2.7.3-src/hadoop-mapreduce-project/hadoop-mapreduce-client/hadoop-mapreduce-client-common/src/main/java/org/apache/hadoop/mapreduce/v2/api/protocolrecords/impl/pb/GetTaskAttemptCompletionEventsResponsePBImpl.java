package org.apache.hadoop.mapreduce.v2.api.protocolrecords.impl.pb;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.apache.hadoop.mapreduce.v2.api.protocolrecords.GetTaskAttemptCompletionEventsResponse;
import org.apache.hadoop.mapreduce.v2.api.records.TaskAttemptCompletionEvent;
import org.apache.hadoop.mapreduce.v2.api.records.impl.pb.TaskAttemptCompletionEventPBImpl;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.TaskAttemptCompletionEventProto;
import org.apache.hadoop.mapreduce.v2.proto.MRServiceProtos.GetTaskAttemptCompletionEventsResponseProto;
import org.apache.hadoop.mapreduce.v2.proto.MRServiceProtos.GetTaskAttemptCompletionEventsResponseProtoOrBuilder;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoBase;
public class GetTaskAttemptCompletionEventsResponsePBImpl extends ProtoBase<GetTaskAttemptCompletionEventsResponseProto> implements GetTaskAttemptCompletionEventsResponse
