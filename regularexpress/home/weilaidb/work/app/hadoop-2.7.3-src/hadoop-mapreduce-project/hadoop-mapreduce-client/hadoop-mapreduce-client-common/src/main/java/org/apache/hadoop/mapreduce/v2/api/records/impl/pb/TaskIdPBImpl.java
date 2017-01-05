package org.apache.hadoop.mapreduce.v2.api.records.impl.pb;
import org.apache.hadoop.mapreduce.v2.api.records.JobId;
import org.apache.hadoop.mapreduce.v2.api.records.TaskId;
import org.apache.hadoop.mapreduce.v2.api.records.TaskType;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.JobIdProto;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.TaskIdProto;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.TaskIdProtoOrBuilder;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.TaskTypeProto;
import org.apache.hadoop.mapreduce.v2.util.MRProtoUtils;
public class TaskIdPBImpl extends TaskId
