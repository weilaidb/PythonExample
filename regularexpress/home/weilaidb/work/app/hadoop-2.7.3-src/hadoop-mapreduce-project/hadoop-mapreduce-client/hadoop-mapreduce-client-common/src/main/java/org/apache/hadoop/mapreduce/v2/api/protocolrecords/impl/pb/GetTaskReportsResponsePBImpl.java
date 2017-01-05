package org.apache.hadoop.mapreduce.v2.api.protocolrecords.impl.pb;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import org.apache.hadoop.mapreduce.v2.api.protocolrecords.GetTaskReportsResponse;
import org.apache.hadoop.mapreduce.v2.api.records.TaskReport;
import org.apache.hadoop.mapreduce.v2.api.records.impl.pb.TaskReportPBImpl;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.TaskReportProto;
import org.apache.hadoop.mapreduce.v2.proto.MRServiceProtos.GetTaskReportsResponseProto;
import org.apache.hadoop.mapreduce.v2.proto.MRServiceProtos.GetTaskReportsResponseProtoOrBuilder;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoBase;
public class GetTaskReportsResponsePBImpl extends ProtoBase<GetTaskReportsResponseProto> implements GetTaskReportsResponse
