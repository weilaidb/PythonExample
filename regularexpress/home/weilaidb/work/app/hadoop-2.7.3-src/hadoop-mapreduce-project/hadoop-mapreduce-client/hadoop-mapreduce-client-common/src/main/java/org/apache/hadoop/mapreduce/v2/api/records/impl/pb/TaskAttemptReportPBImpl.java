package org.apache.hadoop.mapreduce.v2.api.records.impl.pb;
import org.apache.hadoop.mapreduce.v2.api.records.Counters;
import org.apache.hadoop.mapreduce.v2.api.records.Phase;
import org.apache.hadoop.mapreduce.v2.api.records.TaskAttemptId;
import org.apache.hadoop.mapreduce.v2.api.records.TaskAttemptReport;
import org.apache.hadoop.mapreduce.v2.api.records.TaskAttemptState;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.CountersProto;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.PhaseProto;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.TaskAttemptIdProto;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.TaskAttemptReportProto;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.TaskAttemptReportProtoOrBuilder;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.TaskAttemptStateProto;
import org.apache.hadoop.mapreduce.v2.util.MRProtoUtils;
import org.apache.hadoop.yarn.api.records.ContainerId;
import org.apache.hadoop.yarn.api.records.impl.pb.ContainerIdPBImpl;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoBase;
import org.apache.hadoop.yarn.proto.YarnProtos.ContainerIdProto;
public class TaskAttemptReportPBImpl extends ProtoBase<TaskAttemptReportProto> implements TaskAttemptReport
