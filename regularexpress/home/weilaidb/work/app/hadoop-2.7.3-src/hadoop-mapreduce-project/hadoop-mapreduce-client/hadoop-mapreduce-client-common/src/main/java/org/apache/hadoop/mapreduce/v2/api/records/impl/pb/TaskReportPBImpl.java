package org.apache.hadoop.mapreduce.v2.api.records.impl.pb;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.apache.hadoop.mapreduce.v2.api.records.Counters;
import org.apache.hadoop.mapreduce.v2.api.records.TaskAttemptId;
import org.apache.hadoop.mapreduce.v2.api.records.TaskId;
import org.apache.hadoop.mapreduce.v2.api.records.TaskReport;
import org.apache.hadoop.mapreduce.v2.api.records.TaskState;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.CountersProto;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.TaskAttemptIdProto;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.TaskIdProto;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.TaskReportProto;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.TaskReportProtoOrBuilder;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.TaskStateProto;
import org.apache.hadoop.mapreduce.v2.util.MRProtoUtils;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoBase;
public class TaskReportPBImpl extends ProtoBase<TaskReportProto> implements TaskReport
