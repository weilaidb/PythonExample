package org.apache.hadoop.mapreduce.v2.api.records.impl.pb;
import java.util.ArrayList;
import java.util.List;
import org.apache.hadoop.mapreduce.v2.api.records.AMInfo;
import org.apache.hadoop.mapreduce.v2.api.records.JobId;
import org.apache.hadoop.mapreduce.v2.api.records.JobReport;
import org.apache.hadoop.mapreduce.v2.api.records.JobState;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.AMInfoProto;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.JobIdProto;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.JobReportProto;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.JobReportProtoOrBuilder;
import org.apache.hadoop.mapreduce.v2.proto.MRProtos.JobStateProto;
import org.apache.hadoop.mapreduce.v2.util.MRProtoUtils;
import org.apache.hadoop.yarn.api.records.impl.pb.ProtoBase;
public class JobReportPBImpl extends ProtoBase<JobReportProto> implements
JobReport
