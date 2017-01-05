package org.apache.hadoop.mapreduce.v2.util;
import org.apache.hadoop.mapreduce.v2.api.records.JobState;
import org.apache.hadoop.mapreduce.v2.api.records.Phase;
import org.apache.hadoop.mapreduce.v2.api.records.TaskAttemptCompletionEventStatus;
import org.apache.hadoop.mapreduce.v2.api.records.TaskAttemptState;
import org.apache.hadoop.mapreduce.v2.api.records.TaskState;
import org.apache.hadoop.mapreduce.v2.api.records.TaskType;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.JobStateProto;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.PhaseProto;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.TaskAttemptCompletionEventStatusProto;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.TaskAttemptStateProto;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.TaskStateProto;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.TaskTypeProto;
public class MRProtoUtils
